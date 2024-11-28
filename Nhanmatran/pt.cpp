// #include <bits/stdc++.h>
// using namespace std;
// int a[100];
// int main(){
    // int n; cin >> n;
    // string s; cin >> s;
    // bool check = true;  
    // vector<vector<int>> value;
    // while(check){
    //     vector<int> aa;
    //     for (int i = 1; i <= n; i++){
    //         aa.push_back(a[i]);
    //     }
    //     value.push_back(aa);
    //     int i = n;
    //     while(i >= 1 && a[i] == 1){
    //         a[i] = 0;
    //         i--;
    //     }
    //     if (i == 0){
    //         check = false;
    //     }
    //     a[i] = 1;
    // }
    // vector<string> ans;
    // for (int i = 1; i < value.size(); i++){
    //     string tmp = "";
    //     for (int j = 0; j < value[i].size(); j++){
    //         if (value[i][j] == 1){
    //             tmp += s[j];
    //         }
    //     }   
    //     ans.push_back(tmp);
    // }

    // for (auto it : ans){
    //     cout << it << "\n";
    // }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

void printAllSubstrings(const string& str) {
    int n = str.length();
    int cnt = 0;

    // Vòng lặp chọn vị trí bắt đầu của xâu con
    for (int i = 0; i < n; i++) {
        // Vòng lặp chọn độ dài của xâu con từ vị trí i
        for (int j = 1; j <= n - i; j++) {
            cnt ++;
            cout << str.substr(i, j) << endl;
        }
    }
    cout << cnt << '\n';
}

int main() {
    string str = "ABCDABC";
    printAllSubstrings(str);
    return 0;
}