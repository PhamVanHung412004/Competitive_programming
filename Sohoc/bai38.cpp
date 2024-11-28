#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e9 + 7;
void res(int n){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1){
        cout << n << " ";
    }
}
signed main(){
    int n; cin >> n;
    int cnt = 1;
    res(24);
    // cout << '\n';
    // for (int i = 2; i <= n; i++){
    //     res(i);

    //     cout << '\n';
    //     // cnt = (cnt % mod) + (res(i) % mod);
    //     // cnt %= mod;
    // }
    // cout << cnt;
    return 0;
}