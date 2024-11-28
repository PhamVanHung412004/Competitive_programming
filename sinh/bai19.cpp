#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, vector<int> &b){
    int cnt = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] == b[i]){
            cnt++;
        }
    }
    return cnt == a.size();
}

int main(){
    int n; cin >> n;
    vector<int> a;
    vector<int> aa;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
        aa.push_back(x);
    }
    sort(a.begin(), a.end());
    vector<vector<int>> res;
    do{
        vector<int> tmp;
        for (int i = 0; i < a.size(); i++){
            tmp.push_back(a[i]);
        }
        res.push_back(tmp);
    }
    while(next_permutation(a.begin(), a.end()));
    for (int i = 0; i < res.size(); i++){
        if (check(aa,res[i])){
            int nn = i;
            if (nn == res.size() - 1){
                nn = 0;
            }
            else{
                nn++;
            }   
            vector<int> ans = res[nn];
            for (int i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }

        }
    }

    return 0;
}