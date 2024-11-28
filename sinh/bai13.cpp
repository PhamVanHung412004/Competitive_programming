#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){ 
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
    bool oke = true;
    vector<vector<int>> res;
    while(oke){
        vector<int> tmp;
        for (int i = 1; i <= n; i++){
            if (a[i] == 1){
                tmp.push_back(i);
            }
        }
        res.push_back(tmp);
        int i = n;

        while(i >= 1 && a[i] == 1){
            a[i] = 0;
            i--;
        }

        if (i == 0){
            oke = false;
        }
        else{
            a[i] = 1;
        }
    }    
    sort(res.begin(), res.end());
    for (int i = 1; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    // sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i++){
    //     for (int j = 0; j < a[i].size(); j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}