#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int m;
    cin >> m;

    while (m--) {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        if (s.size() != t.size()) {
            cout << "NO" << endl;
            continue;
        }

        unordered_map<char, int> freq;

        for (char ch : s) freq[ch]++;
        for (char ch : t) freq[ch]--;

        bool possible = true;
        for (auto i : freq) {
            if (i.second != 0) {
                possible = false;
                break;
            }
        }

        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
