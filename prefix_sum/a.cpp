#include <bits/stdc++.h>
using namespace std;
int n;
int main(){ 
    cin >> n;
    set<pair<int,int>> a;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.insert(make_pair(x,y));
    }
    cout << a.size();
    return 0;
}