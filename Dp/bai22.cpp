#include<bits/stdc++.h>
using namespace std;
 
void balenca_string(string &a, string &b){
    if (a.length() < b.length()){
        vector<char> key;
        for (int i = 0; i < a.length(); i++){
            key.push_back(a[i]);
        }
        int length = b.length() - a.length();
        while(length--){
            key.insert(key.begin(),'0');
        }
        string a_new = "";
        for (int i = 0; i < key.size(); i++){
            a_new += key[i];
        }
        a = a_new;
    }
    else{
        vector<char> key;
        for (int i = 0; i < b.length(); i++){
            key.push_back(b[i]);
        }
        int length = a.length() - b.length();
        while(length--){
            key.insert(key.begin(),'0');
        }
        string b_new = "";
        for (int i = 0; i < key.size(); i++){
            b_new += key[i];
        }
        b = b_new;
    }
}

string total(string a, string b){
    int i = a.length() - 1;
    vector<int> value = {0};
    vector<char> ans;
    while(i >= 0){
        int total = (a[i] - '0') + (b[i] - '0') + value[0];
        string number = to_string(total);
        if (i == 0){
            if (number.length() == 2){
                ans.insert(ans.begin(),number[1]);
                ans.insert(ans.begin(),number[0]);
            }
            else{
                ans.insert(ans.begin(),number[0]);
            }
            break;
        }
        if (number.length() == 2){
            ans.insert(ans.begin(),number[1]);
            value.insert(value.begin(),number[0] - '0');
        }
        else{
            ans.insert(ans.begin(),number[0]);
            value.insert(value.begin(),0);
        }
        i--;
    }
    string res = "";
    for (int i = 0; i < ans.size(); i++){
        res += ans[i];
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s; cin >> s;
    vector<string> a;
    map<string, string> res;
    res["48"] = "0";
    res["49"] = "1";
    res["50"] = "2";
    res["51"] = "3";
    res["52"] = "4";
    res["53"] = "5";
    res["54"] = "6";
    res["55"] = "7";
    res["56"] = "8";
    res["57"] = "9";
    vector<string> ans;
    for (int i = 0; i < s.size(); i++){
        a.push_back(res[to_string(s[i])]);
        ans.push_back(res[to_string(s[i])]);
    }    
    int index = 1;
    for (int i = 0; i < a.size(); i++){
        int begin = 0;
        int end = begin + index;
        while(end < a.size()){
            string tmp = "";
            for (int j = begin; j <= end; j++){
                tmp += a[j];
            }
            ans.push_back(tmp);
            begin++;
            end++;
        }
        if (end == res.size()){
            begin = 0;
        }
        index++;
    }
    vector<string> pre(ans.size() + 1);
    pre[0] = "0";    
    for (int i = 1; i <= ans.size(); i++){
        balenca_string(pre[i - 1],ans[i - 1]);
        pre[i] = total(pre[i - 1],ans[i - 1]);
    }
    cout << pre[pre.size() - 1];    
    return 0;
}
