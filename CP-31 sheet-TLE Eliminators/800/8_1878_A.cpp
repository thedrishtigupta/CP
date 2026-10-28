
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;

        bool hasK = false;

        for(int i = 0; i < n; i++) {
            int x; cin>>x;
            if(x == k) hasK = true;
        }

        cout<<(hasK ? "YES" : "NO")<<endl;

    }

    return 0;
}