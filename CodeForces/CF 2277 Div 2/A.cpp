

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            freq[x]++;
        }

        int available = 0, mex = 0;

        for (int i = 0; i <= n; i++) {
            available += freq[i];

            if (!freq[i] || available < k) break;

            available -= k;
            mex++;
        }

        cout << mex << '\n';
    }

    return 0;
}