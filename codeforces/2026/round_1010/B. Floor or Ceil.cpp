// Contest: Codeforces Round
// File: B. Floor or Ceil.cpp
// Date: 2026-04-14

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
void solve(){
    ll x, n, m ;
    cin >> x >> n >> m;

    ll lim = 65;

    //for min_x
    ll min_x = x, min_n = min(n, lim), min_m = min(m, lim);
    while(min_m > 0 && min_x > 0){
        min_x =((min_x + 1)/2);
        min_m--;
    }
    while(min_n > 0 && min_x > 0){
        min_x = min_x/2;
        min_n--;
    }
    if(n > lim ) min_x = 0;

    //for max_x
    ll max_x = x, max_n = min(n,lim), max_m = min(m, lim);
    while(max_n > 0 && max_x > 0){
        max_x = max_x/2;
        max_n--;
    }
    while(max_m > 0 && max_x > 0){
        if(max_x == 1) break;
        max_x = (max_x + 1)/2;
        max_m--;
    }
    if( n > lim && max_x > 0 ) max_x = 0;
    
    cout << min_x << " " <<max_x <<"\n";
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}