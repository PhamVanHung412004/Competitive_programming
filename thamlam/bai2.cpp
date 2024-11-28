#include <bits/stdc++.h>
using namespace std;
#define int long long int

void six(string &s){
    
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '5'){
            s[i] = '6';
        }
    }
}

void fine(string &s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '6'){
            s[i] = '5';
        }
    }
}
signed main(){
    string a,b; cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        if (a[i] == '5'){
            a[i] = '6';
        }
    }

    for (int i = 0; i < b.size(); i++){
        if (b[i] == '5'){
            b[i] = '6';
        }
    }
    cout << stoi(a) + stoi(b) << " ";

    for (int i = 0; i < a.size(); i++){
        if (a[i] == '6'){
            a[i] = '5';
        }
    }

    for (int i = 0; i < b.size(); i++){
        if (b[i] == '6'){
            b[i] = '5';
        }
    }


    cout << stoi(a) + stoi(b) << " ";

    return 0;
}