
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;

    while (T--) {
        int n; cin >> n;

        string s; cin >> s;

        int total0 = 0, total1 = 0;
        for (char c : s) {
            if (c == '0') total0++;
            else total1++;
        }

        const int NEG = -1e9;

        int dp00 = NEG;
        int dp01 = NEG;
        int dp10 = NEG;
        int dp11 = NEG;

        for (char c : s) {
            if (c == '0') {
                int ndp00 = max(dp00, max(1, dp01 + 1));
                int ndp10 = max(dp10, dp11 + 1);
                dp00 = ndp00;
                dp10 = ndp10;
            } else {
                int ndp11 = max(dp11, max(1, dp10 + 1));
                int ndp01 = max(dp01, dp00 + 1);
                dp11 = ndp11;
                dp01 = ndp01;
            }
        }

        int best = -1;
        int diffTotal = total0 - total1;

        if (dp00 > NEG && abs(diffTotal - 1) <= 1) best = max(best, dp00);

        if (dp11 > NEG && abs(diffTotal + 1) <= 1) best = max(best, dp11);

        int even = max(dp01, dp10);
        if (even > NEG && abs(diffTotal) <= 1) best = max(best, even);

        if (best == -1) cout << -1 << endl;
        else cout << n - best << endl;
    }

    return 0;
}