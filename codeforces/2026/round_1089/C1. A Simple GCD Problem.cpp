// Contest: Codeforces Round
// File: C1. A Simple GCD Problem.cpp
// Date: 2026-04-03

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return ((a /gcd(a, b))*b);
}



int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n,0);
        vector<int> b(n,0);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int count = 0;

        if(a[0] > gcd(a[0], a[1])) count++;
        for(int i = 1; i < n-1; i++){
            int gl= gcd(a[i-1], a[i]);
            int gr = gcd(a[i], a[i+1]);

            int temp = lcm(gl, gr);
            if(a[i] > temp){
                count++;
            }
        }
        if(a[n-1] > gcd(a[n-1], a[n-2])) count++;

        cout << count << endl;

    }
}