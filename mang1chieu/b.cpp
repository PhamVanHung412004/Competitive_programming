#include <bits/stdc++.h>

using namespace std;
#define int long long int
signed main(){
    int n; cin >> n;
    vector<int> a(3,0);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        a[x]++;
    }
    for (int i = 0; i <= 2; i++){
        int t = a[i];   
        while(t--){
            cout << i << " ";
        }
    }
    return 0;
}