#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = (int)1e9 + 7;
int Pinpow(int a, int b){
    int res = 1;
    a %= mod;

    while(b > 0){
        if (b % 2 == 0){
            res = res * a % mod;
        }
    }
}
signed main(){
    int a, b; cin >> a >> b;
    cout << Pinpow(a,b);
    return 0;
}