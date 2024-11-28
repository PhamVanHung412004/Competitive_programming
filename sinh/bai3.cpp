


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int check = 1;
    while(next_permutation(a + 1, a + 1 + n)){
        for (int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        check = 0;
        break;
    }
    if (check){
        for (int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }
    return 0;
}