#include <bits/stdc++.h>
using namespace std;

int main(){
    set< pair< int,int>> a;
    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        a.insert(make_pair(l,r));
    }
    cout << a.size();
    return 0;
}