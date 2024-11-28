#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<bool> checK(n + 1,0);
    vector<int> dp(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];    
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        dp[i] = max(dp[i - 1],a[i]);
    }


    for (int i = 1; i <= n; i++){
        if (a[i] > dp[i - 1]){
            cout << a[i] << " ";
        }
    }    
    return 0;
}