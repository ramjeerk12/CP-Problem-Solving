// Contest: Codeforces Round 1106
// File: A. Another Puzzle from Papyrus.cpp
// Date: 2026-07-02

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n, c;
        cin >> n >> c;
        vector<int>a(n+1, 0);
        vector<int>b(n+1, 0);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }

        vector<int>is_vis(101, 0);
        for(int i = 1; i <= n; i++){
            is_vis[b[i]]++;
        }

        int ans = 0;
        for(int i = 1; i<= n; i++){

            for(int j = 100; j>=1; j--){

                if(a[i] >= j && is_vis[j] > 0){
                    is_vis[j]--;
                    ans += a[i]-j;
                    break;
                }else{
                    if(j == 1){
                        cout <<"-1\n";
                        return;
                    }
                }
            }
        }

        bool flag =  false;
        for(int i =1 ; i <= n; i++){
            if(a[i] < b[i]) {
                flag= true;
                break;
            }
        }

        if(flag){
            cout <<(ans+c) << "\n";
            return;
        }else{
            cout << ans << "\n";
            return;
        }
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve(); 
    }
}