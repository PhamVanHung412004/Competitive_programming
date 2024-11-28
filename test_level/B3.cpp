#include <bits/stdc++.h>
using namespace std;
const int mod = 1e6;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int u1 = 1;
        int tt = n + 1;
        if (tt % 2 != 0){
            tt--;
        }
        long long kk = (tt + u1) / 2;
        long long res = kk * (4 * kk * kk  - 1);
        res /= 3;
        cout << res << "\n"; 
    }
    return 0;
}