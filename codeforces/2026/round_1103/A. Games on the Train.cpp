// Contest: Codeforces Round 1103
// File: A. Games on the Train.cpp
// Date: 2026-06-12

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>h(n);
        for(int i = 0; i < n; i++) cin >> h[i];

        int max = h[0];
        int min = h[0];
        for(int i = 0; i < n; i++){
            if(h[i] > max) max = h[i];
            if(h[i] < min) min = h[i];
        }

        cout << max + 1 - min << "\n";
        
    }
}