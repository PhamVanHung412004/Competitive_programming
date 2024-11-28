#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int mod = 1001;
const int k = 1001;
long long C[mod][mod];

void init(){
    cout << "Aaa";
    // for (int i = 0; i <= mod; i++){
    //     for (int j = 0; j <= min(i,k); j++){
    //         if (i == j){
    //             c[i][j] = 1;
    //         }
    //         else{
    //             c[i][j] = (c[i - 1][j] % MOD + c[i - 1][j - 1] % MOD);
    //             c[i][j] %= MOD;
    //         }
    //     }
    // }
    for (int i = 0; i <= mod; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;  // Trường hợp cơ sở
            } else {
                C[i][j] = (C[i - 1][j - 1] % mod + C[i - 1][j] % mod);
                C[j][j] %= mod;
            }
        }
    }

}
int main(){
    init();
    cout << C[3][2];
    // for (int i = 1; i <= 20; i++){
    //         for (int j = 1; j <= 20; j++){
    //         cout << C[i][j] << " ";
    //     }
    //     cout << "\n";
    // }    
    

    return 0;
}