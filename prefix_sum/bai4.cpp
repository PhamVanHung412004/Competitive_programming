#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    vector<int> pre = {a[0]};
    for (int i = 1; i < n; i++){
        int tmp = a[i] - a[i - 1];
        pre.push_back(tmp);
    }
    for (int i = 0; i < (int)pre.size(); i++){
        cout << pre[i] << " ";
    }
    return 0;
}