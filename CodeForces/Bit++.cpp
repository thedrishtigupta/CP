#include <iostream>
#include<string>
using namespace std;

int main() {
    int n; cin>>n;
    int x = 0;
    while(n--) {
        string s;
        cin>>s;

        if ((s[0] == 'X' && s[1] == '+' && s[2] == '+') || (s[0] == '+' && s[1] == '+' && s[2] == 'X')) x+=1;
        else if ((s[0] == 'X' && s[1] == '-' && s[2] == '-') || (s[0] == '-' && s[1] == '-' && s[2] == 'X')) x-=1;
    }

    cout<<x<<endl;
    return 0;
}