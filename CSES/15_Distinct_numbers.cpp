#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<long long> nums(n);

    for(int i = 0; i < n; i++) cin>>nums[i];

    sort(begin(nums), end(nums));

    long long ans = 1;

    for(int i = 1; i < n; i++) {
        if(nums[i] != nums[i-1]) ans++;
    }

    cout<<ans<<endl;
}

/*
Unordered set was giving TLE, because the test cases were designed in a way to make hash collisions.
*/