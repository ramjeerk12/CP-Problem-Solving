// Contest: Codeforces Round 1106
// File: B. Crimson Triples.cpp
// Date: 2026-07-10

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll tot_crimson = 0;

        for(int b = 1;  b <= n; b++){
            ll c_of_aorc = (n/b);
            ll count_of_ac = c_of_aorc * c_of_aorc;
            tot_crimson += count_of_ac;
        }

        cout << tot_crimson << "\n";
    }
}