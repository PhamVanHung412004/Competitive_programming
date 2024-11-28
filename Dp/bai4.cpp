#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int n, s; cin >> n >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }   
    vector<int> check(s + 1, false);
    check[0] = true;
    for (int i = 1; i <= s; i++){
        for (int j = 1; j <= n; j++){
            if (i >= a[j]){

                if (check[i - a[j]] == true){
                    cout << i - a[j] << '\n';
                    check[i] = true;
                }
                else{
                    check[i] = false;
                }
            }
        }
    }
    cout << check[s];
    return 0;
}