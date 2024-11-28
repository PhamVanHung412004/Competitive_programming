#include <bits/stdc++.h>
using namespace std;
bool check(string &a, string &b){
    int cnt = 0;
    for (int i = 0; i < a.size(); i++){
        cnt += (a[i] == b[i]);
    }
    return cnt == a.size();
}

int main(){
    int n; cin >> n;
    string s = "";
    string ss = "";
    for (int i = 0; i < n; i++){
        char c; cin >> c;
        s += c;
        ss += c;
    }
    sort(s.begin(), s.end());
    vector<string> res;
    do{ 
        res.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));
    for (int i = 0; i < res.size(); i++){
        if (check(ss,res[i])){
            int nn = i;
            if (nn == res.size()){
                nn = 0;
            }  
            else{
                nn++;
            }

            for (int i = 0; i < res[nn].size(); i++){
                cout << res[nn][i] << " ";
            }
        }
    }
    return 0;
}