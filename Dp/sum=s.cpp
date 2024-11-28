#include <bits/stdc++.h>
using namespace std;
#define int long long int
int max_n = 100000;
int a[200];
signed main(){
    int n,s; cin >> n >> s;
    vector<int> a;
    for (int i = 1; i <= n; i++){
        a.push_back(i);
    }

    do{
        for (int i = 0; i < (int)a.size(); i++){
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    while(next_permutation(a.begin(), a.end()));
    // for (int i = 1; i <= n; i++){
    //     a[i] = 0;
    // }
    // bool oke = true;
    // vector<vector<int>> res;
    // while(oke){
    //     vector<int> tmp;
    //     for (int i = 1; i <= n; i++){
    //         tmp.push_back(a[i]);
    //     }
    //     res.push_back(tmp);
    //     int i = n;
    //     while(i >= 1 && a[i] != 0){
    //         a[i] = 0;
    //         i--;
    //     }
    //     if (i == 0){
    //         oke =  false;
    //     }
    //     else{
    //         a[i] = 1;
    //     }
    // }   

    // for (int i = 0; i < res.size(); i++){
    //     for (int j = 0; j < res[i].size(); j++){
    //         cout << res[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
