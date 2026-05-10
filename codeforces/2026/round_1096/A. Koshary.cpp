// Contest: Codeforces Round 1096
// File: A. Koshary.cpp
// Date: 2026-05-10

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if( x % 2 == 1 && y % 2 == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}