// Contest: Codeforces Round 1095
// File: A. Disturbing Distribution.cpp
// Date: 2026-05-29

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
const ll MOD = 676767677;

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll>a(n, 0);

        for(int i = 0; i < n; i++ ){
            cin >> a[i];
        }

        ll total_cost = 0;
        bool isLarge = false;

        for(int i = 0; i < n; i++ ){
            if( a[i] > 1 ){
                total_cost = (total_cost + a[i]) % MOD;
                isLarge = true;
            }
        }

        if( !isLarge ) cout << 1 << "\n";
        else if(a[n-1] == 1) cout << (total_cost + 1) % MOD << "\n";
        else cout << total_cost << "\n";

    }
}