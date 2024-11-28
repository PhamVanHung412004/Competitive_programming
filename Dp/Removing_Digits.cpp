#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    while (s != "0"){
        int min_n = -1;
        for (int i = 0; i < s.size(); i++){
            min_n = max(min_n,s[i] - '0');

        }
        int s_new = stoi(s);

        cnt++;        
        s_new -= min_n;
        s = to_string(s_new);
    }
    cout << cnt;
    return 0;
}