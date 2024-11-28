#include <bits/stdc++.h>
using namespace std;

int solve(string &s){
    int ss = s[0] - '0';
    for (int i = 1; i < s.size(); i++){
        if (s[i] == '+'){
            ss += s[i + 1] - '0';
        }
        if (s[i] == '-'){
            ss -= s[i + 1] - '0';
        }
    }
    return ss;
}

int solve1(string &s){
    
}

int main(){
    // string s; cin >> s;
    // set<char> a;
    // for (int i = 0; i < s.size(); i++){
    //     if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
    //         a.insert(s[i]);
    //     }
    // }
    // vector<char> aa;
    // for (auto it : a){
    //     aa.push_back(it);
    // }
    // if (aa.size() == 1){
    //     cout << solve(s);
    // }
    // else{
    //     bool oke = false;
    //     for (int i = 0; i < aa.size(); i++){
    //         if (aa[i] == '*' || aa[i] == '/'){
    //             oke = true;
    //         }
    //     }
    //     if (oke){
    //         cout << solve1(s);
    //     }
    //     else{
    //         cout << solve(s);
    //     }
    // }
    return 0;
}
