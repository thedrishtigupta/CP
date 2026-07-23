#include <iostream>
using namespace std;
const long long mod = 1e9 + 7;

long long power(long long x, long long n) {
    long long ans = 1;
    while(n > 0) {
        if(n % 2 == 1) ans = (ans * x) % mod;
        x = (x * x) % mod;
        n /= 2;
    }
    return ans;
}

int main() {
    long long n; cin>>n;

    cout<<power(2, n)<<endl;
    return 0;
}