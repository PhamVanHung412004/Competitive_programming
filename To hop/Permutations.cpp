#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    if (n == 1){
        cout << 1;
    }
    else if (n == 4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else if (n <= 3){
        cout << "NO SOLUTION";
    }
    else{
        int i = 1;
        while(i <= n){
            cout << i << " ";
            i += 2;
        }

        int tt = 2;
        while(tt <= n){
            cout << tt << " ";
            tt += 2;
        }
    }
    return 0;
}