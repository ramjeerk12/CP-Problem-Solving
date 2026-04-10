// Contest: Codeforces Round
// File: C2. A Simple GCD Problem.cpp
// Date: 2026-04-03

#include <bits/stdc++.h> 
using namespace std;


#define fast ios::sync_with_stdio(false); cin.tie(NULL);

long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}


long long lcm(long long a, long long b){
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long>a(n);
        vector<long>b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        long long count = 0;

        
        for(int i = 0; i < n; i++){
            long long g_res;
            if(i == 0){
                g_res = gcd(a[i], a[i+1]);
            } else if(i == n-1){
                g_res = gcd(a[i], a[i-1]);
            }else{
                g_res= lcm(gcd(a[i],a[i+1]), gcd(a[i-1], a[i]));
            }

            long long multi= b[i]/g_res;
            if(multi >= 2 ) count++;
            else if(multi == 1){
                if( a[i] != g_res && a[i] >b[i]) count++;
            }

        }

        cout << count << endl;
        
   
    }
}