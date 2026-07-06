// Contest: Codeforces Round
// File: A. Bigrams.cpp
// Date: 2026-07-06

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        vector<int>c(k);
        for(int i = 0; i < k; i++){
            cin >> c[i];
        }

        bool is_largerthree = false;
        int greater_two = 0;

        for(int i = 0; i < k; i++){
            if(c[i] >= 3){
                is_largerthree = true;
            }
            if(c[i] >= 2) greater_two++;
        }

        if(is_largerthree || greater_two >= 2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}