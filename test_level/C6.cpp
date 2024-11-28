#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << gcd(0,7);
    int n; cin >> n;
    if (n <= 3){
        cout << n << "\n";
    }
    else{
        long long res = -1;
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                if (i + j == n){
                    res = max(res,(long long)(i * j) /gcd(i,j));
                }
            }
        }
        cout << res;
    }   
    return 0;
}
