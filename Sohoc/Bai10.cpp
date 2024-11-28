#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9 + 7;
int Pow(int a, int b){
    int res = 1;
    a %= mod;
    while(b > 0){
        if (b % 2 == 1){
            res *= a;
            res %= mod;
        }
        b /= 2;
        a *= a;
        a %= mod;
    }
    return res;
}
signed main(){
    int n; cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++){
        res += Pow(i,i) % mod;
    }    
    cout << res % mod;
	return 0;
}