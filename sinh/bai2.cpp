#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= k; i++){
        cin >> a[i];
    }
    int b[n - k + 2];
    int index = 1;
    for (int i = k; i <= n; i++){
        b[index] = i;
        index++;
    }
    index--;
    int jj = -1;
    for (int i = index; i >= 1; i--){
        if (a[i] < b[i]){
            jj = i;
            break;
        }
    }
    if (jj == -1){
        for (int i = 1; i <= k; i++){
            cout << i << " ";
        }
    }else{
        a[jj] ++;
        jj++;
        for (int i = jj; i <= k; i++){
            a[i] = a[i - 1];
            a[i]++;
        }

        for (int i = 1; i <= k; i++){
            cout << a[i] << " "; 
        }
    }
    return 0;
}