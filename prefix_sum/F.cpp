#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }   
        sort(a.begin(), a.end(), greater<int>());
        for (auto it : a){
            cout << it << " ";
        }
        cout << '\n';
        // int t = n;
        // if (t % 2 == 0){
        //     t /= 2;
        // }
        // else{
        //     t /= 2;
        //     t++;
        // }
        // long long res = 0;
        // for (int i = 0; i < t; i++){
        //     res += a[i];
        // }   
        // cout << res << '\n';
    }
    return 0;
}