// Contest: Codeforces Round 1093
// File: B. OIE Excursion.cpp
// Date: 2026-04-15

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {

        ll n, m;
        cin >> n >> m;

        vector<ll> a(n+1, 0);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        ll ans = 1, temp = 1;
        for(int i = 2; i <= n; i++){
            if(a[i] == a[i-1]){
                temp++;
            } else{
                ans = max (temp, ans);
                temp = 1;
            }
        }

        ans = max(temp, ans);
        if( ans < m ) cout << "YES\n";
        else cout << "NO\n";

        }
}