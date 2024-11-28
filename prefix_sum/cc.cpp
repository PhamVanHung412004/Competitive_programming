#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n + 1][n + 1];
    int s = 0;
    vector<int> aa;
    for (int i = 1; i <= n; i++){
        int tmp = -1;
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            tmp = max(tmp,a[i][j]);
        }
        aa.push_back(tmp);
        s += tmp;
    }
    for (auto it : aa){
        cout << it << " ";
    }
    cout << s;
    return 0;
}