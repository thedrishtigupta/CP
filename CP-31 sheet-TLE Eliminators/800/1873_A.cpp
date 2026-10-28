
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int right = 0;
        for(int i = 0; i < 3; i++) {
            char ch; cin>>ch;
            if(ch - 'a' == i) right++;
        }

        cout<<(right >= 1 ? "YES" : "NO")<<endl;
    }

    return 0;
}