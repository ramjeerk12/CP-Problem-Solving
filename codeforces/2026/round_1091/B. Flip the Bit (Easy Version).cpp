// Contest: Codeforces Round 1091
// File: B. Flip the Bit (Easy Version).cpp
// Date: 2026-04-11

#include <bits/stdc++.h>
using namespace std;



#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solution(){
    int n, k;
    cin >> n >> k;
    vector<int>a(n+2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int p;
    cin >> p;
    a[0]= a[p];
    a[n+1] = a[p];
    int L = 0, R = 0;

    for(int i = 0; i < p; i++){
        if(a[i] != a[i+1]) L++;
    }

    for(int i = p; i <= n; i++){
        if(a[i] != a[i+1]) R++;
    }

    int ans = max(L, R);

    cout << ans << "\n";

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solution();
        
    }
}