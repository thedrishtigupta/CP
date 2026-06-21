#include <iostream>
#include <string>
#include<climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    long long len = 1;
    long long ans = 1;

    for(int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) len++;
        else len = 1;
        ans = max(ans, len);
    }

    cout<<ans<<endl;

    return 0;
}