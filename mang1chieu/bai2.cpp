#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i] > a[i - 1]){
            cnt++;
        }
    }
    if (cnt == n){
        
    }
    cout << (cnt == n) ? "YES\n" : "NO\n";
    return 0;
}