#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < n; j++){
            int x; cin >> x;
            tmp.push_back(x);
        }
        a.push_back(tmp);

    }
    int u,v; cin >> u >> v;
    --u;
    --v;
    swap(a[u],a[v]);
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < a[i].size(); j++){
            cout << a[i][j] << " "; 
        }
        cout << '\n';
    }
    return 0;
}