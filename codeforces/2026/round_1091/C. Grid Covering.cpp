// Contest: Codeforces Round 1091
// File: C. Grid Covering.cpp
// Date: 2026-04-12

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a * b)/ (long long)gcd(a, b);
}
void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int gcdna = gcd(n, a);
    int gcdmb = gcd(m, b);
    int gcdnm = gcd(n, m);

    if( ( (gcdna == 1 ) && ( gcdmb == 1 ) ) && (gcdnm <= 2 )) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();

        //2nd Method can be using Chinese Remainder Theorem
        
    }
}