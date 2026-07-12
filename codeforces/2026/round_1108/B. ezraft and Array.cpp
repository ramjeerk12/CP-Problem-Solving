// Contest: Codeforces Round 1108
// File: B. ezraft and Array.cpp
// Date: 2026-07-12

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    ll n; cin >> n;

    if(n == 1){
        cout << 1 << "\n";
    } else if( n == 2){
        cout << -1 << "\n";
    }else{
        for(int i = 1; i <= 3; i++){
            cout << i << " ";
        }
        for(ll i = 4; i <= n; i++){
            ll ai = 3 * (ll)pow(2, i-3);
            cout << ai << " ";
        }

        cout << "\n";
        
    }
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}