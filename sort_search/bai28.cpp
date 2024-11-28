#include <bits/stdc++.h>
using namespace std;


signed main(){
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }    
    int zero = 0;
    int cnt = 0;
    vector<int> res;
    for (int i = 0; i < n; i++){
        if (a[i] != zero){
            res.push_back(a[i]);
        }
        else{
            cnt++;
        }
    }   
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    for (int i = 0; i < cnt; i++){
        cout << 0 << " ";
    }
    return 0;

}