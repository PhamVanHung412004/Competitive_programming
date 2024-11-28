#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int init[n + 1];
    for (int i = 1; i <= n; i++){
        init[i] = 0;
    }
    bool oke = true;
    vector<vector<int>> value;
    while(oke){
        vector<int> tmp;
        for (int i = 1; i <= n; i++){
            tmp.push_back(init[i]);
        }
        value.push_back(tmp);
        int i = n;
        while(i >= 1 && init[i] != 0){
            init[i] = 0;
            i--;
        }
        if (i == 0){
            oke = false;
        }
        else{
            init[i] = 1;
        }

    }   
    vector<long long> ans;
    long long res = 1e9;
    for (int i = 0; i < value.size(); i++){
        long long total = 0, total1 = 0;
        for (int j = 0; j < value[i].size(); j++){
            if (value[i][j] == 1){
                total += (long long)a[j + 1];
            }
            else{
                total1 += (long long)a[j + 1];
            }
        }
        res = min(res,abs(total - total1));
        ans.push_back(total);
    }
    cout << res;

    return 0;   
}