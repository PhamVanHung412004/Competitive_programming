#include <bits/stdc++.h>
using namespace std;

#define int long long int 

signed main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = min(abs(a[2] - a[2 - 2]),abs(dp[2 - 1] + abs(a[2] - a[1])));
    for (int i = 3; i <= n; i++){
        dp[i] = min(abs(a[i - 2] - a[i]), abs(dp[i - 1] +  abs(a[i] - a[i - 1])));
        cout << dp[i] << " ";
    }
    // cout << dp[n];  
    return 0;
}