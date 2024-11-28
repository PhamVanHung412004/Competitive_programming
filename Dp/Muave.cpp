#include <bits/stdc++.h>
using namespace std;
const int mod = 6 * 1e4 + 1;
int a[mod];
int b[mod];
int dp[mod];
int n;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    } 
    for (int i = 1; i < n; i++){
        cin >> b[i];
    }    
    dp[0] = 0;
    dp[1] = a[1];

    for (int i = 2; i <= n; i++){
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i - 1]);
    }
    cout << dp[n];
    return 0;
}