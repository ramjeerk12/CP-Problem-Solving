// Contest: Codeforces Round 1097
// File: A. Zhily and Array Operating.cpp
// Date: 2026-05-28

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
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = n-2; i >= 0; i--){
            ll dummy_sum = a[i] + a[i+1];
            if(dummy_sum > a[i]) a[i] = dummy_sum;
        }

        ll pos_int = 0;
        for(int i = 0; i < n; i++){
            if( a[i] > 0 ) pos_int++;
        }

        cout << pos_int << "\n"; 
    }
}