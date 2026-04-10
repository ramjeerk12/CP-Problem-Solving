#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        long long x, y;
        cin >> x >> y;

        if( (x >= max(-4*y, 2*y)) && ((x - (2 * y)) %3 == 0)){
            cout << "YES" << endl;

        }else{
            cout << "NO" << endl;
        }


    }

    return 0;
}