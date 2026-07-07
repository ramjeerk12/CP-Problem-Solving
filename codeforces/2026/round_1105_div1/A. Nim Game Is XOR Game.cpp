// Contest: Codeforces Round 1105_div1
// File: A. Nim Game Is XOR Game.cpp
// Date: 2026-07-07

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define MOD 998244353

void solve(){
    int n; cin >> n;
    vector<ll>a(n);

    //X = xor of all No.

    ll X= 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        X ^= a[i];
    }

    if(n == 1){
        cout << 0 << "\n";
        return;
    }

    if(X == 0){
        cout << 1 << "\n";
        return;
    }

    ll ans = 0;

    for(int i = 0; i < n; i++){
        ll b = X ^ a[i];

        if(b <= a[i] && b >= 0){
            ans = (ans + 1) % MOD;
        }

    }

    cout << ans << "\n";

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}