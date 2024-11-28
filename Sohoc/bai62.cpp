#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e9 + 7;
const int N = 1e6 + 1;
int a[N];
int n , k;
signed main(){  
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= N; i++){
        a[i] = (a[i - 1] % mod) * (i % mod);
        a[i] %= mod;
    }
    cin >> n >> k; 
    int res = (a[n] % mod) / (a[n - k] % mod);
    res /= a[k];    
    cout << res;
    return 0;
}