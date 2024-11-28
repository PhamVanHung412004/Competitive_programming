#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, t; cin >> n >> t;
    vector<long long> value = {0};
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        value.push_back(x);
    }
    for (int i = 1; i < value.size(); i++){
        value[i] += value[i - 1];
    }
    while(t--){
        int l, r; cin >> l >> r;
        l++;
        r++;
        cout << value[r] - value[l - 1] << '\n';
    }
    return 0;
}