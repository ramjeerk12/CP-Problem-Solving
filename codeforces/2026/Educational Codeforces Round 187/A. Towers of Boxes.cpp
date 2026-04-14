// Contest: Codeforces Round 187
// File: A. Towers of Boxes.cpp
// Date: 2026-04-14

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n, m, d, ans = 0;
    cin >> n >> m >> d;

    //temp = Max no. of box in one tower
    int temp = (d/m) + 1;
    if(temp < n){
        ans += n / temp;
        if(n % temp != 0) ans +=1;
    }else{
        ans += 1;
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