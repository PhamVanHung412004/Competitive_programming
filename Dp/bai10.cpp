#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = a[i];
    }    


    for (int i = 2; i <= n; i++){
        int tmp = 1;
        int index = i;
        for (int j = 1; j < i; j++){
            if (a[i] > a[j] && abs(index - j) >= 2){
                tmp = max(tmp,dp[j]);
                index = j;
            }
        }
        tmp += dp[i];
        dp[i] = tmp;
    }
    
    
    cout << *max_element(dp.begin() + 1, dp.end());

    return 0;
}
