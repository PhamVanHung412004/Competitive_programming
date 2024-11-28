#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int,vector<int>> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[x].push_back(i + 1);
    }
    
    return 0;
}