#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = (int)1e7;
bool nt[mod + 1];
void sang(){
    for (int i = 0; i <= mod; i++){
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(mod); i++){
        if (nt[i]){
            for (int j = i * i; j <= mod; j += i){
                nt[j] = false;
            }
        }
    }
}
signed main(){
    sang();
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if (nt[x]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0; 
}