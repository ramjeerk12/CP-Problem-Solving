// Contest: Codeforces Round 1096
// File: B. Party Monster.cpp
// Date: 2026-05-11

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int open= 0, close = 0;

    for(char c : s){
        if(c == '(') open++;
        else close++;
    }

    if(open != close){
        cout << "NO\n";
        return ;
    }

    int balance = 0;
    vector<int> pref(n);
    int min_bal = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '(') balance++;
        else balance--;
        pref[i] = balance;
        min_bal = min(min_bal, balance);
    }

    if(min_bal >= 0){
        cout << "YES\n";
        return;
    }

    int L = 0;
    while(L < n && pref[L] >= 0) L++;
    int R = n-1;
    while(R >= 0 && pref[R] != min_bal) R--;
    
    bool possible = true;
    int current_bal = 0;

    for(int i = 0; i < n; i++){
        if(i >= L && i <= R) continue;
        if(s[i] == '(') current_bal++;
        else current_bal--;

        if(current_bal < 0){
            possible = false;
            break;
        }
    }

    if(!possible) cout << "NO\n";
    else cout << "YES\n";

}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}