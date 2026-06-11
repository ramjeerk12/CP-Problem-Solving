// Contest: Codeforces Round 1102
// File: B. Palindrome, Twelve and Two Terms.cpp
// Date: 2026-06-08

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    ll n; cin >> n;
    
    // let r = n %12, => n = r + (n - r) 
    //                => Always  (n - r) % 12 == 0
    
    ll rem = n % 12;
    ll a = rem;
    ll b;
    if( rem == 10){
        if(22 <= n){
            a = 22;
            b = n - a;
        }else{
            cout << -1 << "\n";
            return;
        }
    }else {
        b = n - a;
    }

    cout << a << " " << b << "\n";

}
int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve(); 
    }
}