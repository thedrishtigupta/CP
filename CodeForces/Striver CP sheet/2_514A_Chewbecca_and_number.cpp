
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';

        if (i == 0 && d == 9) continue;

        s[i] = '0' + min(d, 9 - d);
    }

    cout << s << '\n';
}