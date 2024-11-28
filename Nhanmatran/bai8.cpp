#include <bits/stdc++.h>
using namespace std;
int a[201][201];
int main(){ 
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int u,v; cin >> u >> v;
    for (int i = 1; i <= n; i++){
        swap(a[i][u],a[i][v]);
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}