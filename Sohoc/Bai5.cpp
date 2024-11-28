#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int mod = 1e6;
long long dp[mod + 1];
int main(){
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= mod; i++){
        dp[i] = ((2 * dp[i - 1]) % MOD + (3 * dp[i - 2]) % MOD) % MOD;
    
    }


    int n; cin >> n;
    cout << dp[n];
    return 0;
}