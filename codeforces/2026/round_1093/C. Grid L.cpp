// Contest: Codeforces Round 1093
// File: C. Grid L.cpp
// Date: 2026-04-16 

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    ll p, q;
    cin >> p >> q;

    ll K = ((2 * p) + (4 * q) + 1) ;
    ll A = 3, B = 3;
    bool isFind = false;
    
    while(A <= B){
        ll rem = K % A;
        B = K/A;

        if((rem == 0) && ((A % 2) != 0) &&( (B % 2) != 0)){
            ll n = (A-1)/2, m = (B - 1)/2;
            if(q <= (ll)min(n* ( m + 1), m * (n + 1)) ){
                cout << n << " " << m <<"\n";
                isFind = true;
                break;
            }
        }

        A++;
    }
    if(!isFind) cout << "-1\n";
    
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}