// Contest: Codeforces Round 
// File: A. A Number Between Two Others.cpp
// Date: 2026-06-14

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    ll x, y; cin >> x >> y;

        // Here x < z < y
        //      z mod x == 0; satisfies Because we substracting x from z
        //                    (which is already divisible)
        //      For (y % z != 0); we apply below for loop

        for(ll z = y-x; z > x; z = z - x){
            if(y % z != 0 ){
                cout << "YES" << "\n";
                return;
            }
        }
    cout << "NO" << "\n";
    
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}