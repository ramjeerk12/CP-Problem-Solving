// Contest: Codeforces Round 1090
// File: D. The 67th OEIS Problem.cpp
// Date: 2026-04-04

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

vector<long long> getPrimes(long long n) {
    vector<long long> primes;
    long long num = 2; // Starting from the first prime number

    while (primes.size() < n) {
        bool isPrime = true;
        
        // Check divisibility from 2 up to the square root of num
        for (long long i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}

int main() {
    fast;
    
    int t; cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long>primes =getPrimes(n+1);
        for(int i = 0; i<n; i++){
            cout << primes[i]* primes[i+1] <<" ";
        }

        cout <<"\n";
     
    }
}