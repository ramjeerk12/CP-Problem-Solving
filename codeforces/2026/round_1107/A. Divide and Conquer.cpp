// Contest: Codeforces Round 1107
// File: A. Divide and Conquer.cpp
// Date: 2026-07-03

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    ll x, y; cin >> x >> y;

        if(x % y == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}