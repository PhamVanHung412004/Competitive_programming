#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s; cin >> n >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    if (s < n){

        for (int i = s + 1; i <= n; i++){
            cout << a[i] << " ";
        }
        for (int i = 1; i <= s; i++){
            cout << a[i] << " ";
        }
    }
    else{
        for (auto it : a){
            cout << it << " ";
        }
    }
    return 0;
}