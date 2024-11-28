#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    int tt; cin >> tt;
    long long total = 0;
    while(tt--){
        long long x; cin >> x;
        total += x;
        total %= mod;
    }
    total %= mod;
    cout << total;
    return 0;
}