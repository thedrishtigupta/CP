
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--) {
        int n, k; cin>>n>>k;

        vector<int> a(n);
        for(auto& x : a) cin>>x;

        // bool isSorted = true;

        // for(int i = 1; i < n; i++) {
        //     if (a[i] < a[i-1]) isSorted = false;
        // }

        // if(!isSorted && k == 1) cout<<"NO"<<'\n';
        // else cout<<"YES"<<'\n';

        bool isSorted = is_sorted(a.begin(), a.end());

        cout<< (!isSorted && k == 1) ? "NO" : "YES" <<'\n';
    }

    return 0;
}



