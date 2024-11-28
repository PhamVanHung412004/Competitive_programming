#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n,s; cin >> n >> s;
    vector<int> a(n + 1,0);
    for (int i = 1; i <= n; i++){
        cin >> a[i + 1];
    }
    for (int i = 1; i <= n; i++){
        a[i] += a[i - 1];
    }

    int i = 0;
    int j = 1;
    int cnt = 0;
    while(i < j && j <= n){
        if (a[j] - a[i] <= s){
            cnt++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << cnt;
    return 0;
}