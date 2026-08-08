
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, col;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) {
            int x; cin>>x;
            if (x == 1) {row = i, col = j;}
        }
    }

    cout<<(abs(3 - row) + abs(3 - col))<<endl;

    return 0;
}