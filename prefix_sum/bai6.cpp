#include <bits/stdc++.h>
using namespace std;
const int mod = 2 * 1e5 + 5;
int main(){
    int n, t; cin >> n >> t;
    int T = t;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    vector<pair<int,int>> res;
    int begin = 2 * 1e5;
    int end = -1;
    while(t--){
        int l, r; cin >> l >> r;
        begin = min(begin,l);
        end = max(end,r);
        res.push_back(make_pair(l,r));
    }

    int nn = end - begin + 1;
    vector<long long> value(mod,0);
    
    for (int i = 0; i < nn; i++){
        value[i + begin] = a[i];
    }

    for (int i = 1; i <= n; i++){
        value[i] += value[i - 1];
    }
    long long total = 0;
    for (int i = 0; i < res.size(); i++){
        int l = res[i].first;
        int r = res[i].second;
        total += value[r] - value[l - 1];
    }
    cout << total;
    return 0;
}