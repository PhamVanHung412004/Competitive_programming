#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e6;
int n, s;
int a[mod];
int dp[mod][22];

int get_min(int l, int r){
    int k = log2(r - l + 1);
    return min(dp[l][k], dp[r - (1 << k) + 1][k]);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> s;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i][0] = a[i];
    }

    for (int j = 1; (1 << j) <= n; j++){
        for (int i = 1; i + (1 << j) - 1 <= n; i++){
            dp[i][j] = min(dp[i][j - 1],dp[i + (1 << (j - 1))][j - 1]);
        }
    }

    for (int j = 1; (1 << j) <= n; j++){
        for (int i = 1; i + (1 << j) - 1 <= n; i++){
            dp[i][j] = min(dp[i][j - 1],dp[i + (1 << (j - 1))][j - 1]);
        }
    }
    while(s--){
        int l, r; cin >> l >> r;
        l++;
        r++;
        cout << get_min(l,r) << '\n';
    }
    return 0;   
}