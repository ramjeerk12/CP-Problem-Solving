// Contest: Codeforces Round 1109
// File: A. Iskander and Drawings.cpp
// Date: 2026-07-14

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

        int max_len = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(s[i]=='#'){
                temp++;
                max_len = max(max_len, temp);
            }else{
                temp = 0;
            }
        }

        int tot_sec = (int)ceil(max_len/2.0);
        cout << tot_sec << "\n";
    }
}