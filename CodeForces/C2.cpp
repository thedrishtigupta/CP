#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;

    while (T--) {
        int n; cin >> n;

        string a, b; cin >> a >> b;

        vector<int> evenA, oddA, evenB, oddB;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0) evenA.push_back(i);
                else oddA.push_back(i);
            }
            if (b[i] == '1') {
                if (i % 2 == 0) evenB.push_back(i);
                else oddB.push_back(i);
            }
        }

        if (evenA.size() != evenB.size() || oddA.size() != oddB.size()) {
            cout << -1 << endl;
            continue;
        }

        long long ans = 0;

        int evenSize = evenA.size(), oddSize = oddA.size();

        for (int i = 0; i < evenSize; i++) ans += abs(evenA[i] - evenB[i]) / 2;

        for (int i = 0; i < oddSize; i++) ans += abs(oddA[i] - oddB[i]) / 2;

        cout << ans << endl;
    }

    return 0;
}