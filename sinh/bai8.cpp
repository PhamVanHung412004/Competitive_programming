#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;

    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
        b.push_back(i);
        c.push_back(x);
    }
    sort(c.begin(), c.end());
    vector<vector<int>> res;
    int ii = 0;
    do{
        int cnt = 0;
        for (int i = 0; i < b.size(); i++){
            if (a[i] == c[b[i]]){
                cnt++;
            }
        }
        if (cnt == a.size()){
            cout << ii + 1;
            break;
        }
        else{
            ii++;
        }
    }
    while(next_permutation(b.begin(), b.end()));
    // int index = -1;
    // for (int i = 0; i < res.size(); i++){
    //     if (a == res[i]){
    //         index = i;
    //     }
    // }
    // cout << index + 1;
    // long long check = 1;
    // for (int i = 1; i <= 10; i++){
    //     check *= i;
    // }
    // cout << "\n";
    // cout << check;
    return 0;

}