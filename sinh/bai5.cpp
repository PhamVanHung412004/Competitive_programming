#include <bits/stdc++.h>
using namespace std;
int a[100], oke = 1;

void sinh(int n, int k){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if (i == 0){
        oke = 0;
    }
    else{
        a[i] ++;
        for (int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1; 
        }
    }
}
int main(){
    int n,k; cin >> n >> k;
    for (int i = 1; i <= k; i++){
        a[i] = i;
    }
    while(oke){
        for (int i = 1; i <= k; i++){
            cout << a[i]; 
        }
        cout << "\n";
        sinh(n,k);
    }
    return 0;
}