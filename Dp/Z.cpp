#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1,1);
    map<int,vector<int>> value;
    value[a[1]].push_back(1);
    for (int i = 2; i <= n; i++){
        int tmp = 1;
        bool oke = false;
        vector<int> tmps;
        for (int j = 1; j < i; j++){
            if (a[i] > a[j]){
                tmp = max(tmp,dp[j]);
                oke = true;
            }
        }
        if (oke){
            tmp ++;
            dp[i] = tmp; 
            // value[a[i]].push_back(i);
        }
    }

    cout << n - *max_element(dp.begin() + 1, dp.end());
    // int index = *max_element(dp.begin() + 1, dp.end());
    // int valuess;
    // map<int,int> couts;
    // for (int i = 1; i <= n; i++){
    //     if (dp[i] == index){
    //         couts[a[i]] ++;
    //         // cout << a[i] << " ";
    //     }
    // }
    // int value_res = -1;
    // for (auto it : couts){
    //     if (it.second == 1){
    //         value_res = it.first;
    //     }
    // }
    // vector<int> v = value[value_res];
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << value_res;
    // cout << a[valuess];
    // vector<int> v = value[value_max];
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // // for (int i = 1; i <= n; i++){
    // //     cout << dp[i] << " ";
    // }
    return 0;
}