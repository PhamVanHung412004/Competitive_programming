#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c; 
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    string s_new = a + b;
    sort(s_new.begin(), s_new.end());
    sort(c.begin(), c.end());
    if (s_new == c){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}