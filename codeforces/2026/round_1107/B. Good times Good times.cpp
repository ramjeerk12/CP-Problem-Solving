// Contest: Codeforces Round 1107
// File: B. Good times Good times.cpp
// Date: 2026-07-04

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long


int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        
        string s = to_string(x);
        int d = s.length();

        ll y = 1;
        for(int i = 0; i < d; i++){
            y *= 10;
        }

        y = y + 1;

        // x*y = x(10^d +1)
        // d = length of number in digit
        // Actually, we are shifting this number left side by multiplying 10^d (not in binary)
        //  and adding same number x

        cout << y << "\n";

    }
}