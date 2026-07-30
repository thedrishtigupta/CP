
#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

void dfs(int node, int par, int count, int m, unordered_map<int, vector<int>>& adj, vector<int>& hasCat, int& ans) {
    if(!hasCat[node]) count = 0;
    else count++;

    if(count > m) return;

    bool leaf = true;

    for(int& v : adj[node]) {
        if(v == par) continue;
        leaf = false;
        dfs(v, node, count, m, adj, hasCat, ans);
    }

    if(leaf) ans++;
}

int main() {
    int n, m; cin>>n>>m;

    vector<int> hasCat(n+1);
    for(int i = 1; i <= n; i++) cin>>hasCat[i];

    unordered_map<int, vector<int>> adj;

    for(int i = 0; i < n-1; i++) {
        int a, b; cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 0;

    dfs(1, 0, 0, m, adj, hasCat, ans);
    cout<<ans<<endl;
    return 0;
}