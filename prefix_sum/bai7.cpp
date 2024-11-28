#include <bits/stdc++.h>
using namespace std;
const int mod = 200000; 
int main(){
    int n,k,t; cin >> n >> k >> t;
    vector<long long> res(mod + 5, 0);
    int begin = INT_MAX;
    int end = -1;
    for (int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        res[l]++;
        res[r + 1] --;
    }

    for (int i = 1; i <= mod; i++){
        res[i] += res[i - 1];
    }
    vector<long long> ans(mod + 5, 0);
    for (int i = 1; i <= mod; i++){
        if (res[i] >= k){
            ans[i] ++;
        }
    }

    for (int i = 1; i <= mod; i++){
        ans[i] += ans[i - 1];
    }


    while(t--){
        int l, r; cin >> l >> r;
        cout << ans[r] - ans[l - 1] << "\n";
    }

    // for (int i = 1; i <= n; i++){
    //     cout << res[i] << " ";
    // }
    // cout << '\n';   
    // while(t--){

    //     int l,r; cin >> l >> r;
    //     if (res[r] - res[l - 1] >= k){
    //         cout << res[r] - res[l - 1] << "\n";
    //     }
    // }
    return 0;
}