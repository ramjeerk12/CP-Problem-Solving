// Contest: Codeforces Round 190
// File: A. Optimal Purchase.cpp
// Date: 2026-05-25

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        if(b >= 3*a){
            cout << n*a << endl;
        }else {
            ll ans = (ll)(n/3.0)*b + (ll)min((n%3)*a, b);
            cout << ans << endl;
        }
        
    }
}