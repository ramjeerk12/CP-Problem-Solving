#include<iostream>
using namespace std;

int main(){

    int t, n;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        for(int i = n; i > 1; i--){
            cout << i << " ";
        }
        cout << 1 << endl;
    }

    return 0;
}
