// Contest: Codeforces Round 1090
// File: C. The 67th Permutation Problem.cpp
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
        for(int i = 1; i < n+1 ;i++ ){
            cout <<i<<" "<< (3*n)-(2*i)+1<< " " << (3*n)-(2*i)+2 <<" ";
            
        }
        cout << "\n";
        
    }
}