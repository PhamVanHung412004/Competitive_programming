#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    int n; cin >> n;
    long long a[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){\
            if ((i == 1 && j == 1) || (i == n && j == n))
                a[i][j] = 1;
            else{
                a[i][j] = 0;
            }
        }
    }
    char value[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> value[i][j];
        }
    }
    int dx[2] = {0,1};
    int dy[2] = {1,0};
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            for (int k = 0; k < 2; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 1 && x <= n && y >= 1 && y <= n){
                    if (value[x][y] != '*'){
                        a[x][y] = 1;
                        // a[x][y] %= mod;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    // cout << a[n][n];
    return 0;  
}