#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++){   
        a[i] = i;
    }
    vector<vector<int>> res;
    do{
        vector<int> tmp;
        for (int i = 1; i <= n; i++){
            tmp.push_back(a[i]);
        }
        res.push_back(tmp);
    }
    while(next_permutation(a + 1,a + 1 + n));
    for (int i = res.size() - 1; i >= 0; i--){
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j];
        }
        cout << "\n";
    }
    return 0;
}