#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e9 + 7;
bool check(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return true;
        }
    }
    return false;
}
signed main(){
    int t; cin >> t;
    for (int x = 1; x <= t; x++){
        if (x % 2 == 0){
            cout << 2 << "\n";
        }
        else{

            if (check(x)){
                cout << x << "\n";
            }
            else if (x == 1){
                cout << 1 << "\n";
            }   
            else{
                cout << x << '\n';
            }
        }
    }
    return 0;
}