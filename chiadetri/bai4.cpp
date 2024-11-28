#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    vector<vector<int>> a = {{0},{1}};
    vector<vector<int>> b = {{0},{1}};

    int cnt = 1;
    for (int i = 2; i <= 50; i++){
        cnt++; 
        vector<int> init = a[a.size() - 1];
        vector<int> tmp;
        for (int j = 0; j < init.size(); j++){
            tmp.push_back(init[j]);
        }
        tmp.push_back(cnt);
        for (int j = 0; j < init.size(); j++){
            tmp.push_back(init[j]);
        }
        for (int index = 0; index < tmp.size(); index++){
            cout << tmp[index] << " ";
        }
        cout << "\n";
        a.push_back(tmp);
    }
    cout << "aa";
    // int n; cin >> n;
    // vector<int> res = a[n];
    // for (int i = 0; i < res.size(); i++){
    //     cout << res[i] << " ";
    // }
    return 0;
}