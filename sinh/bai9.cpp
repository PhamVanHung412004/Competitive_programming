#include <bits/stdc++.h>
using namespace std;
int oke = 1;
void sinh(int a[],int n, int k){
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
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= k; i++){
        cin >> a[i];
    }
    int index = 0;    
    while(oke){
        int b[n + 1];
        b[0] = 0;
        for (int i = 1; i <= k; i++){
            b[i] = i;
        }
        if (a != b){
            index++;
        }
        else{
            break;
        }
        sinh(a,n,k);
    }
    cout << index;
    
    return 0;
}