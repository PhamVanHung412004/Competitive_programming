#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t; cin >> t;
    vector<pair<int,int>> res;
    while(t--){
        int x, y; cin >> x >> y;
        res.push_back(make_pair(x,y));
    }
    sort(res.begin(), res.end());
    int ans = 0;
    for (int i = 0; i < res.size(); i++){
        ans = max(ans , res[i].first) + res[i].second;
    }
    cout << ans;
    return 0;
}