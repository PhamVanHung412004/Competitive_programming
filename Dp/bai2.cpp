#include <bits/stdc++.h>
using namespace std;

#define int long long int
signed main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1, 1);
    for (int i = 2; i <= n; i++){
        int tmp = 1;
        bool oke = false;
        for (int j = 1; j < i; j++){
            if (a[i] > a[j]){
                tmp = max(tmp,dp[j]);
                oke = true;
            }
        }
        if (oke){
            tmp ++;
            dp[i] = tmp;
        }
    }

    cout << *max_element(dp.begin() + 1, dp.end());
    return 0;
}