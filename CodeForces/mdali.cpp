#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n), c(n);
        ll totalC = 0;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            totalC += c[i];
        }

        vector<ll> dp(n, 0);
        ll best = 0;
        for (int i = 0; i < n; ++i) {
            ll bestPrev = 0;
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) {
                    if (dp[j] > bestPrev) bestPrev = dp[j];
                }
            }
            dp[i] = bestPrev + c[i];
            if (dp[i] > best) best = dp[i];
        }

        ll answer = totalC - best;
        cout << answer << '\n';
    }

    return 0;
}
