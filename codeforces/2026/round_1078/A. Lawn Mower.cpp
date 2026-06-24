// Contest: Codeforces Round 1078
// File: A. Lawn Mower.cpp 
// Date: 2026-06-24

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        ll n, w;
        cin >> n >> w;

        ll div_floor = n/w;
        ll ans = n - div_floor;

        cout << ans << "\n";
        
    }
}