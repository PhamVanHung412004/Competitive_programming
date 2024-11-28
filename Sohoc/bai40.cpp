#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 10;
int Pow(int a, int b){
    if (b == 0){
        return 1;
    }
    int x = Pow(a,b/2);
    if (b % 2 == 0){
        return ((x % mod) * (x % mod)) % mod; 
    }
    else{
        return ((x % mod) * (x % mod) * (a % mod)) % mod; 
    }
}
signed main(){
    int b; cin >> b;
    int a = 1378;
    int res = Pow(a,b);
    cout << res % mod;
    return 0;
}