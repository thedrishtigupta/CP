
#include <bits/stdc++.h>
using namespace std;

const int LOG = 30;

struct Basis {
    int b[LOG];

    Basis() {
        memset(b, 0, sizeof(b));
    }

    void insert(int x) {
        for (int i = LOG - 1; i >= 0; i--) {
            if (!(x >> i & 1)) continue;
            if (!b[i]) {
                b[i] = x;
                return;
            }
            x ^= b[i];
        }
    }

    bool operator==(const Basis &other) const {
        for (int i = 0; i < LOG; i++)
            if (b[i] != other.b[i]) return false;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;

    while (T--) {
        int n; cin >> n;

        Basis A, B;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            A.insert(x);
        }

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            B.insert(x);
        }

        cout << (A == B ? "YES" : "NO") << '\n';
    }

    return 0;
}