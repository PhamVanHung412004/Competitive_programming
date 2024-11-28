#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int mod1 = 1e6 + 1;
long long f[mod1];
int a[101];
int n,x;
int main(){
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    f[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int s = 1; s <= x; s++){
            if (s >= a[i])
                (f[s] += f[s - a[i]]) %= mod;
        }
    }
    cout << f[x];
    return 0;
}