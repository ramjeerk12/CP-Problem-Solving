// Contest: Codeforces Round 1081
// File: A. String Rotation Game.cpp
// Date: 2026-06-22

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int no_of_diff = 0;
        bool isEqual = false;

        for(int i = 0; i < n; i++){
            int next_idx = (i + 1) % n;
            if(s[i] != s[next_idx]) no_of_diff++;
            else isEqual = true;

        }

        if(isEqual){
            cout << no_of_diff + 1 << "\n";
        }else{
            cout << no_of_diff << "\n";
        }

    }
}