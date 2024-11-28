#include <bits/stdc++.h>
using namespace std;


int total1(int n){
    if (n == -1){
        return -1;
    }
}

// long long total2(int n){
//     if (n == 2){
//         return 2;
//     }

//     if (n % 2 == 0 && n != 2){
//         return n + total2(n - 1);
//     }
// }

int main(){
    int n; cin >> n;
    cout << total1(n);
    return 0;
}