#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    string s1 = "";
    string s2 = "";
    int mid = s.size() / 2;
    for (int i = 0; i < mid; i++){
        s1 += s[i];
    }
    for (int i = s.size() - 1; i >= mid; i--){
        s2 += s[i];
    }
    cout << s1 << " " << s2;
    return 0;
}