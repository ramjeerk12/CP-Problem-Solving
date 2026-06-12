// Contest: Codeforces Round 1103
// File: B. Tatar TV Show.cpp
// Date: 2026-06-12

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
        ll k; cin >> k;
        string s;
        cin >> s;

        // Can be multiple time conversion of 0 ->1 and 1 -> 0
        // we require Even No of '1' on step of k of each remender of k.
        
        for(int i = 0; i < k; i++){
            int one_count = 0;
            for(int j = i; j < n; j = j + k){
                if(s[j] == '1') one_count++;
            }

            if(one_count % 2 != 0){
                cout << "NO" <<"\n";
                return;
            }
        }

    cout << "YES" << "\n";

}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}