#include <bits/stdc++.h>
using namespace std;

#define int long long int
signed main(){
    int n, k; cin >> n >> k;
    vector<int> a(n + 1),b(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    } 
    for (int i = 1; i <= n; i++){
        a[i] += a[i - 1];
    }
    int l = 1;
    int r = k;
    int res = -1;
    vector<pair<int,pair<int,int>>> ans;
    while(r <= n){
        res = max(res, a[r] - a[l - 1]);
        ans.push_back(make_pair(res,make_pair(l,r)));
        l++;
        r++;
    }
    cout << res << "\n";

    for (int i = 0; i < ans.size(); i++){
        if (ans[i].first == res){
            int l = ans[i].second.first;
            int r = ans[i].second.second;
            for (int i = l; i <= r; i++){
                cout << b[i] << " ";
            }
            break;
        }
    }
    return 0;
}