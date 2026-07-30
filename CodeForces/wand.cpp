#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        bool hasEven = false, hasOdd = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        if (hasEven && hasOdd) sort(a.begin(), a.end());

        for (int x : a) cout << x << " ";
        cout <<endl;
    }

    return 0;
}
