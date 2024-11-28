#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int k,n; cin >> n >> k;
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
    int b[k + 1];
    for (int i = 1; i <= k; i++){
        b[i] = i;
    }
    bool oke = true;
    while(oke){
        for (int i = 1; i <= n; i++){
            if (a[i] == 0){
                cout << b[i];
            }
            else{
                cout << b[i];
            }
        }
        cout << "\n";
        int i = n;
        while(i >= 1 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        if (i == 0){
            oke = false;
        }
        else{
            a[i] = 1;
        }
    }
    return 0;
}