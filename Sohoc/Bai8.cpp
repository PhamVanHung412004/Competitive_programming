#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
const int mod = 1e9 + 7;
long long a[maxn + 1];
int main(){
    a[1] = 2;
    a[2] = 8;
    for (int i = 3; i <= maxn; i++){
        a[i] = ((2 * a[i - 1]) % mod + (8 * a[i - 2]) % mod) % mod;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}