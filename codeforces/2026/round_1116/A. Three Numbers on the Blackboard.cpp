// Contest: Codeforces Round 1116
// File: A. Three Numbers on the Blackboard.cpp
// Date: 2026-08-11

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        vector<int>a(3,0);
        cin>>a[0] >> a[1] >> a[2];

        sort(a.begin(), a.end());
        if(a[0] + a[1] < a[2]){
            a[2] = a[0] + a[1];
        }

        cout << a[2] - a[0] << "\n";
    }
}