// Contest: Codeforces Round
// File: B. Predominant Frequency Division.cpp
// Date: 2026-07-06

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n; cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int>pref_part2(n+1, 0);
    for(int i = 0; i < n; i++){
        int weight = (a[i] == 3) ? -1 : 1;
        pref_part2[i+1] = (pref_part2[i] + weight);
    }

    vector<int>max_pref_part2(n+1, -1e9);
    max_pref_part2[n-1] = pref_part2[n-1];
    for(int i = n-2; i>= 0; i--){
        max_pref_part2[i] = max(pref_part2[i], max_pref_part2[i+1]);
    }

    int p1_ones = 0;
    int p1_others = 0;

    for(int i = 1; i <=n-2; i++ ){
        if(a[i-1] == 1)p1_ones++;
        else p1_others++;

        if(p1_ones >= p1_others){
            if(max_pref_part2[i+1] >= pref_part2[i]){
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        
        solve();
    }
}