#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main(){
    int n, t; cin >> n >> t;
    vector<int> a(n + 5, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> b(n + 5,0);
    b[1] = a[1];
    for (int i = 2; i <= n; i++){
        b[i] = a[i] - a[i - 1];
    }
    while(t--){
        int l,r,k; cin >> l >> r >> k;
        ++l;
        ++r;
        b[l]  += k;
        b[r + 1] -= k; 
    }
    for (int i = 1; i <= n; i++){
        b[i] += b[i - 1];
    }
    for (int i = 1; i <= n; i++){
        cout << b[i] << " ";
    }
    return 0;
}