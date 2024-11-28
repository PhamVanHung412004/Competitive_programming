#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long total(long long a, long long b){
    if (b == 0){
        return 1;
    }
    long long x = total(a,b/2);
    if (b % 2 == 0){
        return ((x % mod) * (x % mod)) % mod;
    }
    else{
        return ((x % mod) * (x % mod) * (a % mod)) % mod;
    }
}
int main(){
    long long a,b; cin >> a >> b;
    cout << total(a,b);
    return 0;
}