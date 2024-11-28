#include <bits/stdc++.h>
using namespace std;
const int mod = 1005;
const int mod1 = 1e9 + 7;
long long c[mod][mod];
int main(){
    for (int i = 1; i <= mod; i++){
        c[i][0] = 1;
    }

    int i = 0;
    int j = 0;
    while(i <= mod && j <= mod){
        c[i][j] = 1;
        i++;
        j++;

    }
    for (int i = 2; i <= 1000; i++){
        for (int j = 1; j <= 1000; j++){
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            c[i][j] %= mod1;
        }
    }
    cout << c[2][3];
    return 0;
}