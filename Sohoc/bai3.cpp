#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    int n; cin >> n;
    long long tmp = 1;
    for (int i = 1; i <= n; i++){
        tmp *= (long long)i;
        tmp %= mod;
        cout << tmp << "\n";
    }
    return 0;
}