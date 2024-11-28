#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }

    bool oke = true;
    while(oke){
        for (int i = 1; i <= n; i++){
            if (a[i] == 1){
                cout << 'A';
            }
            else{
                cout << 'B';
            }
        }
        cout << '\n';
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