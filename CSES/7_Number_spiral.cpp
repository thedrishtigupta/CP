#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        long long y, x; cin >> y >> x;

        long long n = max(x, y);
        long long ans;

        if(n & 1) {
            if(x == n) ans = n * n - y + 1;
            else ans = (n - 1) * (n - 1) + x;
        }
        else {
            if(y == n) ans = n * n - x + 1;
            else ans = (n - 1) * (n - 1) + y;
        }

        cout << ans << endl;
    }
}