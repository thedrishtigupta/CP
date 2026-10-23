#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        int dotCnt = 0;
        bool found = false;

        for(int i = 0; i < n; i++) {
            if (s[i] == '.' && (i > 0 && s[i-1] == '.') && (i < n-1 && s[i+1] == '.')) {found = true; break;}
            if (s[i] == '.') dotCnt++;
        }

        cout<<(found ? 2 : dotCnt)<<'\n';
    }

    return 0;
}