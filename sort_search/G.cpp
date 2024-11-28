#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    vector<pair<string,int>> a,b;
    a.push_back(make_pair("-",0));
    b.push_back(make_pair("-",0));
    for (int i = 1; i <= n; i++){
        string s; cin >> s;
        if (i % 2 != 0){
            a.push_back(make_pair(s,i));
        }
        else{
            b.push_back(make_pair(s,i));
        }
    }
    sort(a.begin() + 1, a.end());
    sort(b.begin() + 1, b.end(), greater<pair<string,int>>());
    for (auto it : a){
        if (it.second != 0){
            cout << it.first << " " << it.second << '\n';
        }
    }
    cout << '\n';
    for (auto it : b){
        if (it.second != 0){
            cout << it.first << " " << it.second << '\n';
        }
    }

    return 0;   
}