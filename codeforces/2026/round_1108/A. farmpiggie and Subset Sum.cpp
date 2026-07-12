// Contest: Codeforces Round 1108
// File: A. farmpiggie and Subset Sum.cpp
// Date: 2026-07-12

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0 ) cout <<( i + 1 )<<" ";
        else cout << (i - 1) << " ";
    }

    cout << "\n";
}
int main() {
    fast;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}