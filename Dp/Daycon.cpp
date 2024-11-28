#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1,0);
    a[0] = 0;
    dp[0] = 0;
    int res = -1;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if (a[j] < a[i]){
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
        res = max(res,dp[i]);
    }
    cout << res;
    return 0;
}