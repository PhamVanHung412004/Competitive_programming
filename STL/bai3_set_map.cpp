#include <bits/stdc++.h>
using namespace std;

bool cmt(char a, char b){
    return (int)a > (int)b;
}

int main(){
    int t; cin >> t;
    vector<char> myvetor;    
    while(t--){
        char c; cin >> c;
        myvetor.push_back(c);
    }
    sort(myvetor.begin(),myvetor.end(),cmt);

    for (int i = 0; i < myvetor.size(); i++){
        cout << myvetor[i] << " ";
    }
    // for (int i = 0; i < s.size(); i++){
    //     if(s[i] != ' '){
    //         myset.insert(s[i]);
    //     }
    // }
    // cout << myset.size() << "\n";
    // for (auto it : myset){
    //     cout << it << " ";
    // }
    return 0;
}