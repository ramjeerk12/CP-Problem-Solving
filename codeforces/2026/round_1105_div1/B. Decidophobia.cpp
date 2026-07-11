// Contest: Codeforces Round 1105_div1
// File: B. Decidophobia.cpp
// Date: 2026-07-11

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    ll total_sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total_sum += a[i];
    }

    if(2 * d >= n - 1){
        ll tot_happi = 0;
        for(int i = 0; i < n; i++){
            ll true_neighbots_sum = total_sum - a[i];
            ll rec = max(0LL, 2LL * d * a[i] - true_neighbots_sum);
            tot_happi += rec;
        }

        cout << tot_happi << "\n";
        return;
    }

    ll curr_win_sum = 0;
    for(int i = -d; i <= d; i++){
        curr_win_sum += a[(i % n + n) % n];

    }

    ll tot_happi = 0;
    for(int i = 0; i < n; i++){
        ll true_neighbors_sum = curr_win_sum - a[i];

        ll rec = max(0LL, 2LL * d * a[i] - true_neighbors_sum);
        tot_happi += rec;

        ll leav_element = a[((i -d) % n + n) % n];
        ll entr_element = a[((i + d + 1) % n + n) % n];

        curr_win_sum = curr_win_sum - leav_element + entr_element;
    }

    cout << tot_happi << "\n";

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
}