// Contest: Codeforces Round 1091
// File: A. The Equalizer.cpp
// Date: 2026-04-07

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int totalSum = 0;
        vector<int>a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            totalSum += a[i];
        }

        if((totalSum % 2 != 0) || (n*k) % 2 == 0 ){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<<endl;
        }
    }

    return 0;
}