#include <bits/stdc++.h>
using namespace std;


long long total(int n){
    if (n == 1){
        return 1;
    }
    return n * n + total(n - 1);
}

int main(){
    int n; cin >> n;
    cout << total(n);
    return 0;
}