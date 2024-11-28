#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e9 + 7;

signed main(){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 5; i <= n; i *= 5){
        cnt += n/i;
        cnt %= mod;
    }
    cout << cnt;
    return 0;
}