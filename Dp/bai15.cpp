#include <bits/stdc++.h>
using namespace std;
#define int long long int
void check(int n){
    vector<int> a;
    for (int i = 0; i < n; i++){
        a.push_back(i);
    }

    for (int i = 1; i <= (int)a.size(); i++){
        a[i] += a[i - 1];
    }
    cout << "max value = " << a[a.size() - 1] << '\n';
}
signed main(){
    int n, s; cin >> n >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // check((int)1e6 + 1);
    vector<int> dp(s + 1);
    dp[0] = 0;
    for (int i = 1; i <= s; i++){
        int tmp = INT_MAX - 1;
        for (int j = 1; j <= n; j++){
            if (i - a[j] >= 0){
                tmp = min(tmp,dp[i - a[j]]);
            }
        }
        tmp ++;
        dp[i] = tmp;
    }
    if (dp[s] == INT_MAX){
        cout << -1;
    }else{
        cout << dp[s];
    }
    return 0;
}
