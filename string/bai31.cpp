#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    string s; cin >> s;
    map<char,int> mymap;
    for (int i = 0; i < s.size(); i++){
        mymap[s[i]] ++;
    }

    for (auto it : mymap){
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}