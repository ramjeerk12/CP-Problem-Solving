// Contest: Codeforces Round 1099
// File: A. Construct an Array.cpp
// Date: 2026-05-24

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int high = n, low = 1;
        vector<bool>vis(2*n +1, false);
        vector<int>ans(n, 0);
        int idx = 0;
        ans[idx] = 1;
        vis[1] = true;
        idx++;

        for(int i = 2 ; i <= 2*n; i++){
            if(idx == n) break;
            if(vis[i])i++;
            else if((i+ ans[idx-1]) <= 2*n){
                if(!vis[i+ans[idx-1]] && idx < n){
                    ans[idx] = i;
                    vis[i+ans[idx-1]] = true;
                    idx++;
                }
            }else{
                if(!vis[i] && idx < n){
                    ans[idx] = i;
                    idx++;
                }
            }
        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";

        }
        cout << endl; 

    }
}