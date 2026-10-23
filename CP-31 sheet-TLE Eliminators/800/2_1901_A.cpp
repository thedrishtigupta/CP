
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int n, x; cin>>n>>x;

        vector<int> a(n);
        for(auto& x : a) cin>>x;

        int ans = a[0];

        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }

        ans = max(ans, 2 * (x - a[n - 1]));

        cout << ans << '\n';
    }

    return 0;
}