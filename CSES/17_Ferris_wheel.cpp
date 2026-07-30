
#include <bits/stdc++.h>
using namespace std;
/*

bool isPossible(int m, vector<int>& arr, int x) {
    int cnt = 1;
    long long sum = 0;

    for(int val : arr) {
        if(sum + val > x) {cnt++; sum = val;}
        else sum += val;

        if (cnt > m) return false;
    }

    return cnt <= m;
}
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin>>n>>x;

    vector<int> arr(n);

    for(int& val : arr) cin>>val;

    sort(arr.begin(), arr.end());

    int i = 0, j = n-1;
    int ans = 0;

    while (i <= j) {
        if (arr[i] + arr[j] <= x) i++;

        j--;
        ans++;
    }

    cout<<ans<<endl;

    return 0;
}

/*
My initial approach was to solve this using Binary search on answer, but it was wrong because:
(I didn't read the question right :)))
The questions says each gondola can have AT MOST 2 children.
So the simplest way is to pair heavy child with light child.
*/