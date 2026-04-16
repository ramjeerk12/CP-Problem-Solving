// Contest: Codeforces Round 1093
// File: A. Blocked.cpp 
// Date: 2026-04-13

#include <bits/stdc++.h>
using namespace std;
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n;
    cin >> n;

    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
    bool isImpossible = false;

    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            isImpossible = true;
            break;
        }
    }

    if(isImpossible) cout << "-1\n";
    else {
        for(auto val : a) cout << val << " ";
        cout << "\n";
    }
}

int main() {
    fast;
    int t; cin >> t;
    while(t--) {
        solve();
    }
}