// Contest: Codeforces Round 1109
// File: B. Nikita and Books.cpp
// Date: 2026-07-14

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
        vector<ll>a(n+1);
        ll curr_sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            curr_sum += a[i];

        }

        ll tot_sum = n * (n + 1) / 2;
        if(curr_sum < tot_sum){
            cout << "NO\n";
        }else{
            ll excess_val = 0;
            for(int i = 1; i <= n; i++){
                excess_val += a[i] - i;
                if(excess_val < 0){
                    cout << "NO\n";
                    return;
                }
            }

            cout << "YES\n";
    }
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}