#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1,1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};
int a[101][101];

bool check(int xi, int yi){
    int cnt = 0;
    for (int i = 0; i < 8; i++){
        int x = xi + dx[i];
        int y = yi + dy[i];
        if (a[xi][yi] > a[x][y]){
            cnt++;
        }
    }
    return cnt == 8;
}
int main(){
    int n,m; cin >> n >> m;
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