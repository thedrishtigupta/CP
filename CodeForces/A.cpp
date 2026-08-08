#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int a, b, c; cin>>a>>b>>c;

        int minDiff = abs(a - b);
        minDiff = min(minDiff, abs(b - c));
        minDiff = min(minDiff, abs(a - c));
        cout<<minDiff<<endl;
    }
    
    return 0;
}
