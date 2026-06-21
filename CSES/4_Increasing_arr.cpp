#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin>>arr[i];

    long long ans = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) ans += arr[i-1] - arr[i];

        arr[i] = max(arr[i], arr[i-1]);
    }

    cout <<ans<<endl;

    return 0;
}