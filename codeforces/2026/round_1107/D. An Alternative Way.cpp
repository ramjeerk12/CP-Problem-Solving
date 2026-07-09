// Contest: Codeforces Round 1107
// File: D. An Alternative Way.cpp
// Date: 2026-07-09

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
        vector<int>a(n, 0);
        vector<int>b(n, 0);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        ll pref_sum = 0;
        for(int i = 0; i < n; i++){
            pref_sum += (b[i] - a[i]);
            if(pref_sum < 0){
                cout << "NO\n";
                return;
            }
        }

    cout << "YES\n";
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}