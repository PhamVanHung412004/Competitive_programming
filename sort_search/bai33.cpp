#include <bits/stdc++.h>
using namespace std;

#define int long long int
signed main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }     
        vector<bool> check(n + 1, true);
        vector<pair<int,int>> ans;
        for (int i = 1; i <= k; i++){
            int l = 1;
            int r = l + i; 
            set<pair<int,pair<int,int>>> res;
            int total = 0;
            while(r < n){  
                if (check[l] == true && check[r] == true){
                    if (abs(a[n] + a[n - 1] - (a[l] + a[r])) != 0){
                        total = max(total, abs(a[n] + a[n - 1] - (a[l] + a[r])));
                        res.insert(make_pair(abs(a[n] + a[n - 1] - (a[l] + a[r])), make_pair(l,r)));
                    }
                }
                l++;
                r++;
            }
            for (auto it : res){
                if (total == it.first){
                    ans.push_back(it.second);
                    check[it.second.first] = false;                    
                    check[it.second.second] = false;                    
                }
            }
        }

        for (int i = 0; i < ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << "\n";
        }
    }    
    return 0;
}