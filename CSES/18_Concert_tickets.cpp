
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin>>n>>m;

    multiset<int> price;
    for(int i = 0; i < n; i++) {
        int x; cin>>x;
        price.insert(x);
    }

    while(m--) {
        int x; cin>>x;

        auto it = price.upper_bound(x);

        if(it == price.begin()) cout<<-1<<endl;
        else {
            it--;
            cout<<*it<<endl;
            price.erase(it);
        }
    }

    return 0;
}

/*
My initial approach was vector + binary search for finding the <= x price. But the problem was in deleting.
Since one ticker can only be bought by one person, we would have to deete it, and deleteing in vector again will take O(n).

So better option -> use MULTISET.
It stores value in sorted order & allow multiple/ duplicate values alo, deletion takes O(logN).

We simple find upper bound, then do it-- for actual answer, check for out of bound, then print ans and erase.
*/