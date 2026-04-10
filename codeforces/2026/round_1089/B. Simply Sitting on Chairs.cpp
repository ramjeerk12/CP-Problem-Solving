// Contest: Codeforces Round
// File: B. Simply Sitting on Chairs.cpp
// Date: 2026-04-01

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n, count;
        cin >> n;
        count = 0;
        vector<int> vec(n, 0);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        for(int i = 0; i < n; i++){
            if(vec[i] <= i+1) count++;
        }

        cout << count <<"\n";
    }
}