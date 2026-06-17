// Contest: Codeforces Round 
// File: A. Passing the Ball.cpp
// Date: 2026-06-17

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    // if 'L' is found then we can revert back
    // then it is stopping point
    // After First 'L' it will not go beyond this index
    // Hence, Ans is count till this index.
    
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            ans++;
            cout << ans << "\n";
            return;
        }else if(s[i] == 'R'){
            ans++;
        }

    }

    cout << ans << "\n";

}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}