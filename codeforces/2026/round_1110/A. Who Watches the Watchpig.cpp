// Contest: Codeforces Round 1110
// File: A. Who Watches the Watchpig.cpp
// Date: 2026-07-16

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;

        int ans = 0;
        if(n < 2 * k){
            cout << "-1\n";
        }else{
            for(int i = 0; i < k; i++){
                if(s[i] == 'L') ans++;
            }

             for(int i = n - k; i < n; i++){
                if(s[i] == 'R') ans++;
            }

            cout << ans <<"\n";
        }
    }
}