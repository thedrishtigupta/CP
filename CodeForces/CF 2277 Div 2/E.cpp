
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

ll ask(int x, const vector<int>& p) {
    cout << "? " << x;
    for (int i = 1; i <= n; i++) cout << " " << p[i];
    cout << endl;
    ll r; cin >> r;
    if (r == -1) exit(0);
    return r;
}

int main() {
    int t; cin>>t;
    while(t--) {
        cin >> n;
        if (n == 2) { cout << "!\n1 2" << endl; continue; }

        // Phase 1: subtree sizes rooted at 1.
        // p_v = n, p_1 = n-1  =>  answer = n*s_v + (n-1)*(n-s_v)
        vector<ll> sz(n + 1, n);
        for (int v = 2; v <= n; v++) {
            vector<int> p(n + 1);
            p[v] = n; p[1] = n - 1;
            int c = 1;
            for (int i = 2; i <= n; i++) if (i != v) p[i] = c++;
            sz[v] = ask(1, p) - (ll)n * (n - 1);
        }

        // Order by decreasing size: every parent comes before its children.
        vector<int> ord(n);
        iota(ord.begin(), ord.end(), 1);
        stable_sort(ord.begin(), ord.end(), [&](int a, int b) { return sz[a] > sz[b]; });

        // Phase 2: query x = ord[k] with p = 1 there, everyone else gets their rank
        // in ord (2..n), so p strictly increases from parent to child. Then
        // answer = 1 + sum_{j=k+2..n} j + sum_{j=2..k+1} max(j, p_parent),
        // which is strictly increasing in p_parent.
        vector<pair<int,int>> edges;
        for (int k = 1; k < n; k++) {
            int v = ord[k];
            vector<int> p(n + 1);
            p[v] = 1;
            for (int j = 0; j < n; j++) if (j != k) p[ord[j]] = (j < k ? j + 2 : j + 1);
            ll rem = ask(v, p) - 1;
            for (int j = k + 2; j <= n; j++) rem -= j;
            int par = -1;
            for (int m = 2; m <= k + 1 && par == -1; m++) {
                ll g = 0;
                for (int j = 2; j <= k + 1; j++) g += max(j, m);
                if (g == rem) par = ord[m - 2];
            }
            edges.push_back({par, v});
        }

        cout << "!\n";
        for (auto& e : edges) cout << e.first << " " << e.second << "\n";
        cout.flush();
    }

    return 0;
}
