// Contest: Codeforces Round 1098
// File: A. Marisa Steals Reimu's Takeout.cpp
// Date: 2026-05-27

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>w(n, 0);
        for(int i = 0; i < n; i++) cin >> w[i];

        int c0 = 0, c1 = 0, c2 = 0;
        for(int wi : w){
            if( wi == 0 ) c0++;
            else if( wi == 1 ) c1++;
            else c2++;
        }

        int operations = 0;
        int pairs = min( c1, c2);
        int leftone = c1 - pairs;
        int lefttwo = c2 - pairs;

        operations += c0 + pairs + ( leftone / 3 ) + ( lefttwo / 3 );

        cout << operations << "\n";

    }
}