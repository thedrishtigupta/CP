
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k; cin>>n>>m>>k;

    vector<int> applicants(n);
    for(int& x : applicants) cin>>x;

    vector<int> apartments(m);
    for(int& x : apartments) cin>>x;

    sort(begin(applicants), end(applicants));
    sort(begin(apartments), end(apartments));

    int ans = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if(abs(applicants[i] - apartments[j]) <= k) {ans++; i++; j++;}
        else if (apartments[j] < applicants[i] - k) j++;
        else i++;
    }

    cout<<ans<<endl;


    return 0;
}

/*
My initial approach was to sort the applicants only, and i to perform binary search on apartments.
for range [(x-k), (x+k)]

BUT - this is wrong because only one person can get an apartment, not more. So i would have to delete the apartments.
Not sure how to do that in vector, deleting operating alone would have taken O(N), not good.

So change of strategy, sort both of them and then use two pointer approach. Same range check.
*/