#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1,-1,-1,0,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1};
int a[101][101] = {0};

bool check(int xi, int yi, int n, int m){
    // int cnt = 0;
    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < 8; i++){
        int x = xi + dx[i];
        int y = yi + dy[i];
        if ((1 <= x && x <= n) && (1 <= y && y <= m)){
            if (a[xi][yi] > a[x][y]){
                cnt1 ++;
            }
            cnt++;
        }
        // cout << a[xi][yi] << " ";
        // if (a[xi][yi] > a[x][y]){
        //     cnt++;
        // }
    }
    cout << cnt << " " << cnt << '\n';
    return cnt == cnt1;
    // cout << "\n";
    // return cnt == 8;
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
            if (check(i,j,n,m)){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
