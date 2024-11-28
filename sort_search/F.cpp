#include <bits/stdc++.h>
using namespace std;
const int mod = 1e5;
int a[mod + 1];
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    bool oke = false;
    for (int i = 3; i <= n; i++){
        if (a[i - 1] + a[i - 2] > a[i]){
            oke = true;
            break;
        }
    }
    if (oke){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}