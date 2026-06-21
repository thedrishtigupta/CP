#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    long long sum = 0;
    for(auto i = 1; i < n; i++) {
        int x; cin>>x;
        sum += x;
    }

    long long expSum = n * (n+1) / 2;

    cout << expSum - sum<<endl;

    return 0;
}