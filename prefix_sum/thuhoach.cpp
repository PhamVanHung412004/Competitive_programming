#include <bits/stdc++.h>
using namespace std;
#define int long long int
int a[1001][1001];
int n, m, q;
signed main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            int x; cin >> x;
            a[i][j] = a[i - 1][j] + a[i][j - 1] + x - a[i - 1][j - 1];

        }
    }

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= m; j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    cin >> q;
    while(q--){
        int x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1] << '\n';
    }
    return 0;
}