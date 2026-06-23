// Contest: Codeforces Round 1049
// File: A. Shift Sort.cpp
// Date: 2026-06-23

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        // Find How many zeros we have to replace in beggining
        // Since, we have all zeros in begging, Hence find How many ones in that range from beggining
        
        int zeros = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zeros++;
        }

        int ones = 0;
        for(int i = 0; i < zeros; i++){
            if(s[i] == '1') ones++;
        }

        cout << ones << "\n";
        
    }
}