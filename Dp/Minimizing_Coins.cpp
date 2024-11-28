#include <bits/stdc++.h>
using namespace std;
const int mod = 1e6 + 1;
int a[101];
int dp[mod];
int n,x;
int main(){ 
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    dp[0] = 0;
    for (int i = 1; i <= x; i++){
        dp[i] = 1e9;
        for (int j = 1; j <= n; j++){
            if (i >= a[j]){
                dp[i] = min(dp[i],dp[i - a[j]] + 1);
            }
        }
    }

    if (dp[x] == 1e9){
        cout << -1 << "\n";
    }
    else{
        cout << dp[x];
    }
    return 0;
}