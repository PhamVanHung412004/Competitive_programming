#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int n,s; cin >> n >> s;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        a[i] += a[i - 1];
    }
    int i = 0;
    int j = 1;
    int cnt = 0;
    while(i < j && j <= n){
        if (a[j] - a[i] == s){
            cnt++;
            i++;
            j++;
        }
        else if (a[j] - a[i] < s){
            j++;
        }
        else{
            i++;
        }
    }
    cout << cnt;
    return 0;
}