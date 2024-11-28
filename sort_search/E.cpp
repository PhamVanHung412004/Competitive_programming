#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if (n % 2 != 0 || n < 4){
            cout << -1 << "\n";
        }
        else{
            n = n / 2;
            if (n == 1){
                cout << -1 << '\n';
            }
            else{
                cout << (n / 3 + ((n % 3 != 0) ? 1 : 0)) << " " << n / 2 << '\n';
            }
        }
    }
    return 0;
}