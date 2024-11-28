#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    string a,b; cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b){
        cout << "28tech";
    }
    else{
        cout << "29tech";
    }
    return 0;
}