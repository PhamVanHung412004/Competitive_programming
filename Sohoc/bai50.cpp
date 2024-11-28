#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[13][13];
signed main(){
    for (int i = 1; i <= 13; i++){
        for (int j = 1; j <= i; j++){
            if (i == 1 || i == j){
                a[i][j] = 1;
            }
            else{
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}