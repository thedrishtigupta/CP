#include <iostream>
#include<string>
using namespace std;

int main() {
    int n; cin>>n;
    string s; cin>>s;

    int org = s.length();
    int diff = n-org;

    s.insert(0, diff, 'o');
    cout<<s;
    return 0;
}