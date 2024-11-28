#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<long long> res;
    for (int i = 0; i < n; i++){
        long long x; cin >> x;
        res.push_back(x);
    }
    for (int i = 1; i < (int)res.size(); i++){
        res[i] += res[i - 1];
    }
    for (int i = 0; i < (int)res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}