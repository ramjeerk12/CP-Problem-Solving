// Contest: Codeforces Round
// File: B. The 67th 6-7 Integer Problem.cpp
// Date: 2026-04-04

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n= 7, ans;
        vector<int>a(n, 0);
        int total_sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(i < 6) total_sum -= a[i];
            else total_sum += a[i];
        }

        ans = total_sum;

        cout << ans << endl;
        
    }
}