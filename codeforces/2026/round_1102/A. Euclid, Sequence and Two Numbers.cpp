// Contest: Codeforces Round 1102
// File: A. Euclid, Sequence and Two Numbers.cpp
// Date: 2026-06-08

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll>b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        bool is_possible = true;
        // Sort in Decreasing Order
        sort(b.begin(), b.end(), greater<ll>());

        // Check b[i] % b[i+1] = b[i+2]
        for(int i = 0; i < n-2; i++){
            ll next_number = b[i] % b[i+1];
            if(next_number != b[i+2]){
                is_possible = false;
                break;
            }
        }

        // Answer
        if(!is_possible){
            cout << -1 << "\n";
        }else{
            ll x = b[0], y = b[1];
            cout << x << " " << y << "\n";
        }

    }
}