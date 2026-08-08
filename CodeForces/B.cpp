#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1]) cnt++;

        int ans = INT_MAX;

        for (int i = 1; i <= n - 2; i++) {
            int b1 = (s[i - 1] != s[i]);
            int b2 = (s[i] != s[i + 1]);
            int bNew = (s[i - 1] != s[i + 1]);

            int cur = cnt - b1 - b2 + bNew;
            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}