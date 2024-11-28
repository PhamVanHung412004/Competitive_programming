#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    bool oke = true;
    while(next_permutation(s.begin(), s.end())){
        for (int i = 0; i < s.size(); i++){
            cout << s[i];
        }
        oke = false;
        break;
    }
    if (oke){
        cout << "NOT EXIST";
    }
    return 0;
}