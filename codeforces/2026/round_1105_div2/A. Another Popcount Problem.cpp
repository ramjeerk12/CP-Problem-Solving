// Contest: Codeforces Round 1105
// File: A. Another Popcount Problem.cpp
// Date: 2026-07-01

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        ll pop_count = 0;

        ll n, k; cin >> n >> k;
        for(ll itr= 0; ; itr++){
            ll temp = pow(2, itr);
            if(n >= temp*k){
                pop_count += k;
                n -= (temp*k);
            }else{
                pop_count += (n/temp) ;
                break;
            }

        }

        cout << pop_count << "\n";

    }
}