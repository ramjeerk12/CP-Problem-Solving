// Contest: Codeforces Round 1109
// File: C. Stepan and Permutation.cpp
// Date: 2026-07-14

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<int>p(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }

    vector<vector<int>>adj(n + 1);
    for(int i = 1; i <= n; i++){
        if(i + x <= n){
            adj[i].push_back(i + x);
            adj[i + x].push_back(i);
        }

        if(i + y <= n){
            adj[i].push_back(i + y);
            adj[i + y].push_back(i);
        }
    }

    vector<bool> vis(n + 1, false);
    bool possible = true;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            vector<int>comp_idx;
            vector<int>comp_val;
            queue<int>q;

            q.push(i);
            vis[i] = true;

            while(!q.empty()){
                int u = q.front();
                q.pop();
                comp_idx.push_back(u);
                comp_val.push_back(p[u]);

                for(int v : adj[u]){
                    if(!vis[v]){
                        vis[v] = true;
                        q.push(v);
                    }
                }
            }

            sort(comp_idx.begin(), comp_idx.end());
            sort(comp_val.begin(), comp_val.end());

            if(comp_idx != comp_val){
                possible = false;
                break;
            }

        }
    }

    cout << (possible ? "YES\n" : "NO\n");

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}