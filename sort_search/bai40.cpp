#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int n; cin >> n;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(make_pair(x,i + 1));
    }
    sort(a.begin(), a.end());

    vector<bool> check(n + 1, false);
    int cnt = 1;
    for (int i = 0; i < a.size(); i++){
        if (check[a[i].second] == false){
            vector<int> tmp;
            tmp.push_back(a[i].first);
            for (int j = i + 1; j < a.size(); j++){
                if (a[i].second < a[j].second){
                    tmp.push_back(a[j].first);
                    check[a[j].second] = true;
                }
            }

            for (int index = 1; index < tmp.size(); index++){
                if (tmp[index] - tmp[index - 1] == 1){
                    cnt++;
                }
                else{
                    check[check[tmp[index]]] = false;
                }
            }

        }
    }
    cout << cnt;



    return 0;
}