#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a((int)1e7,0);

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
    }
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << ((a[n] == 0) ? "NO\n" : "YES\n");

    }
    
    return 0;   
}