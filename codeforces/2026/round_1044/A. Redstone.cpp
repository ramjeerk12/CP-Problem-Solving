// Contest: Codeforces Round 1044
// File: A. Redstone.cpp
// Date: 2026-06-15

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;

        vector<int>a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        // If any two number are same then ans will YES
        // Because if 1st number is from one of them, then 2nd number 
        // can become last number after rearrange hence (a[1]/a[n]) == 1

        vector<int>ans(101, 0);
        for(int i = 1; i <= n; i++){
            int idx = a[i];
            ans[idx]++;
        }

        for(int val : ans){
            if(val >= 2){
                cout << "YES\n";
                return;
            }
        }

    cout << "NO\n";
    
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}