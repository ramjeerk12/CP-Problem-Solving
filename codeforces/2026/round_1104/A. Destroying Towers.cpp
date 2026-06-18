// Contest: Codeforces Round 1104
// File: A. Destroying Towers.cpp
// Date: 2026-06-18

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<ll>a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll min_sum = 0;
        for(int i = 0; i < n-1; i++){
            min_sum += a[i];
            if(a[i+1] > a[i]){
                a[i+1] = a[i];
            }
        }

        min_sum += a[n-1];

        cout << min_sum << "\n";
    }
}