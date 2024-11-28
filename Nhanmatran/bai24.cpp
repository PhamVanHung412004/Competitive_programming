#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> a;
    set<int> myset;
    for (int i = 1; i <= n; i++){
        set<int> c;
        for (int j = 1; j <= n; j++){
            int x; cin >> x;
            c.insert(x);
            myset.insert(x);
        }
        vector<int> tmp;
        for (auto it : c){
            tmp.push_back(it);
        }
        a.push_back(tmp);
    }
    vector<int> res;
    for (auto it : myset){
        int cnt = 0;
        for (int i = 0; i < a.size(); i++){
            for (int j = 0; j < a[i].size(); j++){
                if (it == a[i][j]){
                   cnt++; 
                }
            }
        }
        if (cnt == a.size()){
            res.push_back(it);
        }
    }
    if (res.size() == 0){
        cout << "NOT FOUND";
    }
    else{
        for (int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
    }
    return 0;
}