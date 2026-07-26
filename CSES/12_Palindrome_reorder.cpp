
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    
    vector<int> freq(26, 0);

    for(char ch: s) freq[ch-'A']++;

    int oddCount = 0;

    for(int cnt : freq) {
        if(cnt % 2 != 0) oddCount++;
    }

    if(oddCount > 1) {cout<<"NO SOLUTION"<<endl; return 0;}

    int odd = -1;

    string left = "";

    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) odd = i;
        else {
            left.append(freq[i]/2, 'A'+i);
        }
    }

    string ans = left;

    if(odd != -1) {
        ans.append(freq[odd], 'A'+odd);
    }

    reverse(begin(left), end(left));

    ans += left;

    cout<<ans<<endl;

    return 0;
}

/*
1. Only 1 character can have odd freq.
2. Store frequency in an array, build first half of string with even freq characters.
3. then append odd freq characters at once (if no odd freq char, skip)
4. Then reverse the prev list and append.
*/