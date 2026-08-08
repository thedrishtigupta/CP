#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;

    while (T--) {
        int n; cin >> n;

        map<int, int> freq;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            freq[x]++;
            sum += x;
        }

        int val = 0, mxFreq = 0;
        for (auto &[x, f] : freq) {
            if (f > mxFreq) {
                mxFreq = f;
                val = x;
            }
        }

        int other = n - mxFreq;

        if (mxFreq <= other + 1) cout << sum << endl;
        else {
            long long sumOthers = sum - 1LL * mxFreq * val;
            cout << sumOthers + 1LL * (other + 2) * val << endl;
        }
    }

    return 0;
}