#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        a[i] += a[i - 1];
    }
    long long res = -1e18;
    for (int i = 1; i <= n; i++){
        long long tmp = max(a[i],a[n] - a[i]);
        res = max(res,tmp);
    }
    cout << res;
    return 0;
}
