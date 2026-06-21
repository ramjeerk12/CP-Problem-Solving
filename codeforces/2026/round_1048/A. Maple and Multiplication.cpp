// Contest: Codeforces Round 1048
// File: A. Maple and Multiplication.cpp
// Date: 2026-06-21

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;

        if(a == b){
            cout << 0 << "\n";
        }else if((a % b == 0) || (b % a == 0)){
            cout << 1 << "\n";
        } else{
            cout << 2 << "\n";
        }
        
    }
}