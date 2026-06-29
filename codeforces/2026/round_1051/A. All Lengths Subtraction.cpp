// Contest: Codeforces Round 1051
// File: A. All Lengths Subtraction.cpp
// Date: 2026-06-26

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
        vector<int>p(n);

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int l = 0, r = n-1;

        for(int i = 1; i <= n; i++){
            if(p[l] == i){
                l++;
            }else if(p[r] == i){
                r--;
            }else{
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