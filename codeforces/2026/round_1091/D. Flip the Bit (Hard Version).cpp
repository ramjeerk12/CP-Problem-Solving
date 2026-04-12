// Contest: Codeforces Round 1091
// File: D. Flip the Bit (Hard Version).cpp
// Date: 2026-04-13

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n , k;
    cin >> n >> k;

    vector<int>a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    vector<int>p(k+1);
    for(int i = 1; i <= k; i++){
        cin >> p[i];
    }

    int x = a[p[1]], ans = 0;
    vector<int>boundaries;

    vector<int> b(n+2, 1);
    for(int i = 1; i <= n; i++){
        if(a[i] == x) b[i] = 1;
        else b[i]= 0;
    }

    for(int i = 0; i < n+1; i++){
        if(b[i] != b[i+1]) boundaries.push_back(i);
    }

    vector<int> region(k+1, 0);

    int X=0, total_boundary = 0;

    for(int pos : boundaries){
        bool assign = false;
        for(int i = 0; i < k+1; i++){
            if(pos < p[i+1]){
                region[i]++;
                assign = true;
                break;
            }
            
        }

        if(!assign) region[k]++; //last region
    }
    
    for(int i = 0; i < k+1; i++){
        X = max(X, region[i]);
    }

    total_boundary = boundaries.size();
    ans = max(total_boundary/2, X);

    cout << ans << "\n";

    
}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
        
    }
}