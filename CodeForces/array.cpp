#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) g = gcd(g, a[i]);

        long long ans = -1;

        for (long long x = 2; x <= 200000; x++) {
            if (isPrime(x) && g % x != 0) {ans = x; break;}
        }

        if (ans == -1) {
            long long x = 200001;
            while (1) {
                if (isPrime(x) && g % x != 0) {ans = x;break;}
                x++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
