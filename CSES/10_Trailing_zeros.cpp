#include <iostream>
using namespace std;

int main() {
    long long n; cin>>n;

    long long ans = 0;

    while(n > 0) {
        n /= 5;
        ans += n;
    }

    cout<<ans<<endl;
    return 0;
}

/*
Every multiple of 5 contributes to a zero. 
25 = 5 X 5 = 2 zeroes
125 = 5 X 5 X 5 = 3 zeroes

hence ans = n/5 + n/25 + n/125 ...

Ex. for n = 100
ans = 100/5 + 100/25 = 20 + 4 = 24
*/