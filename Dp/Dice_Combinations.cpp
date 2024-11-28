#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int mm = 1e6 + 1;
long long a[mm];
int main(){ 
    a[0] = 1;

    for (int i = 1; i <= mm; i++){
        for (int j = max(0,i - 6); j <= i - 1; j++){
            a[i] = (a[i] + a[j]) % mod;
        }
    }
    int n; cin >> n;
    cout << a[n];
    /*
    n = 3
    1 1 1
    1 2
    2 1
    3
    */
    return 0;
}