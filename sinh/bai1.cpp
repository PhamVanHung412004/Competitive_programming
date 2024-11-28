#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    string tmp = "";
    for (int i = 0; i < s.size(); i++){
        tmp += s[i];
    }
    int i = s.size();
    while(s[i] != '0' && i >= 1){
        s[i] = '0';
        i--;
    }
    if (i == 0){
        s[0] = '0';
        cout << s << " ";
    }
    else{
        s[i] = '1';
        cout << s;
    }
    return 0;
}