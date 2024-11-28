#include <bits/stdc++.h>
using namespace std;
#define int long long int

int res(int n, int p){
    int cnt = 0;
    for (int i = p; i <= n; i *= p){
        cnt += n / i;
    }   
    return cnt;
}

signed main(){
    int n, s; cin >> n >> s;
    cout << res(n,s);
    return 0;
}