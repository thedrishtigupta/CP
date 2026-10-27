
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        int a[n];

        for(int i = 0; i < n; i++) cin>>a[i];

        map<int ,int> freq;

        for(int i = 0; i < n; i++) freq[a[i]]++;

        if (freq.size() >= 3) {
            cout<<"No"<<endl;
        } else {
            int freq_1 = freq.begin()->second;
            int freq_2 = freq.rbegin()->second;
            
            if (freq_1 == freq_2) cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

    }

    return 0;
}