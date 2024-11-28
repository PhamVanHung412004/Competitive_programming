#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n,k;
int dp[100005];
const int mod = 1e9 + 7;
signed main(){
    cin >> n >> k;
    dp[0] = 1;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            if (i - j >= 0){
                dp[i] = (dp[i] % mod) + (dp[i - j] % mod);
                dp[i] %= mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}