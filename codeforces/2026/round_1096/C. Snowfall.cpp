// Contest: Codeforces Round 1096
// File: C. Snowfall.cpp
// Date: 2026-06-03

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>a(n);
        vector<int> bascket_1, bascket_2, bascket_3, bascket_6, result;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if( a[i] % 6 == 0) bascket_6.push_back(a[i]);
            else if(a[i] % 2 == 0) bascket_2.push_back(a[i]);
            else if(a[i] % 3 == 0) bascket_3.push_back(a[i]);
            else bascket_1.push_back(a[i]);

        }

        result.reserve(a.size());
        result.insert(result.end(), bascket_2.begin(), bascket_2.end());
        result.insert(result.end(), bascket_1.begin(), bascket_1.end());
        result.insert(result.end(), bascket_3.begin(), bascket_3.end());
        result.insert(result.end(), bascket_6.begin(), bascket_6.end());

        for(int i = 0; i < n; i++){
            cout << result[i] <<" ";
        }

        cout << "\n";
        
    }
}