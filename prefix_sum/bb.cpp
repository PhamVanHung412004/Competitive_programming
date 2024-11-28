#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m;
int a[501][501];
vector<int> init;
void loang(int i, int j, int &cnt){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if ((1 <= x && x <= n) && (1 <= y && y <= m) && a[x][y] == 1){
            cnt ++;
            loang(x,y, cnt);
        }
    }
}
int main(){
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int res = -1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == 1){
                int cnt = 1;
                loang(i,j, cnt);
                res = max(res,cnt);
            }
        }
    }
    cout << res;
    return 0;
}