// Contest: Codeforces Round
// File: B. Mickey Mouse Constructive.cpp
// Date: 2026-04-04

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
int mod = 676767677;

int find_divisor(int a){
    int total_div = 0;
    for(int divisor = 1; divisor <= a; divisor++){
        if(a % divisor == 0) total_div = (total_div+1) % mod;
    }

    return total_div % mod;
}


int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        int x, y,temp_x,temp_y;
        cin >>x >> y;
        temp_x = x;
        temp_y= y;
        if(x != y){
            int total_sum = abs(x - y);
            int total_divisor = find_divisor(total_sum) % mod;
            cout << total_divisor <<"\n";
        }else{
            cout << 1 <<"\n";
        }

        for(int i = 0; i < (x+y); i++ ){
            if(y < x){
                if(temp_y != 0){
                    
                }
            }
        }

        cout << "\n";
  
    }
}