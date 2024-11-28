#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e9 + 7;
int ans(int n){
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            cnt ++;
            cnt %= mod;
            if (n / i != i){
                cnt++;
                cnt %= mod;
            }
        }
    }
    return cnt;
}
signed main(){
    int t; cin >> t;
    int res = 1;
    while(t--){
        int x; cin >> x;
        res = ((res % mod) * (x % mod)) % mod;
    }

    cout << ans(res);
    return 0;
}