#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n; cin >> n;
    set<char> myset;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++){
            myset.insert(s[j]);
        }
    }
    for (auto it : myset){
        cout << it << " ";
    }
    return 0;
}