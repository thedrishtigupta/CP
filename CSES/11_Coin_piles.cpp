
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while(t--) {
        long long a,b; cin>>a>>b;
        if ((a+b) % 3 == 0 && max(a, b) <= 2*min(a, b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

/*
Observation 1: Total coins

Each move removes exactly 3 coins: (1,2) or (2,1)

So if it's possible to empty both piles, (a+b) % 3=0 must be true.

Observation 2: One pile can't be too large

Suppose one pile has many more coins than the other.

For every move, you can remove at most 2 coins from a single pile.

If max(a,b)>2×min(a,b) , then the smaller pile will become empty before the larger one, making it impossible to finish.

Example: a = 10, b = 2

Even if you always remove 2 from the larger pile: (10,2) → (8,1) → (6,0)

Now one pile is empty while the other still has coins left, so the answer is NO.

Therefore, the answer is YES iff:
1. (a + b) % 3 == 0
2. max(a, b) <= 2 * min(a, b)

*/