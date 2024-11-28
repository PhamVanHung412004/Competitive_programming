#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[101][101];
int n;
int dx[2] = {0,-3};
int dy[2] = {-3,0};

int calc(int x, int y){
    int total = a[x][y];
    int init = 0;
    for (int i = 0; i < 2; i++){
        int xi = x + dx[i];
        int yi = y + dy[i];
        init -= a[xi][yi];
    }
    return total + init + a[x - 3][y - 3];
}

signed main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int x; cin >> x;
            a[i][j] = a[i - 1][j] + a[i][j - 1] + x - a[i - 1][j - 1];
        }
    }
    int res = -1;
    for (int i = 3; i <= n; i++){
        for (int j = 3; j <= n; j++){
            res = max(res,calc(i,j));
        }
    }
    cout << res;

    return 0;
}