
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const ll MOD = 998244353;

ll h(ull K) {
    ll best = LLONG_MAX, acc = 0;
    while (true) {
        if (K == 0) { best = min(best, acc); break; }
        int M = 1;
        while (((1ULL << M) - 1) < K) M++;
        ull ex = ((1ULL << M) - 1) - K;
        if (ex < 1000) best = min(best, acc + M + 2 + 2 * (ll)ex);
        if (M == 1) break;
        acc += (M - 1) + 2;
        K -= (1ULL << (M - 1)) - 1;
    }
    return best;
}

ll f(ull n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    ull K = n / 2;
    return h(K) + (ll)(2 * K - (n - 1)) - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        ull l, r; cin >>l>>r;
        ll ans = 0;
        for (ull n = l; n <= r; n++) ans = (ans + f(n)) % MOD;
        cout << ans << "\n";
    }

    return 0;
}
