#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[101][101];
int n, m;
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};

bool check(int x, int y){
    int cnt = 0;
    for (int i = 0; i < 8; i++){
        int xi = x + dx[i];
        int yi = y + dy[i];
        if (a[x][y] > a[xi][yi]){
            cnt++;
        }
    }
    return cnt == 8;
}
signed main(){
    cin >> n >> m;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            a[i][j] = -1;
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (check(i,j)){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}