// Contest: Codeforces Round 1088
// File: A. Antimedian Deletion.cpp
// Date: 2026-04-04

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>a(n,0);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n == 1) cout << 1 << endl;
        else{
            for(int i = 0; i < n; i++){
                cout << 2<<" ";
            }
            cout <<"\n";
        }

    }
}