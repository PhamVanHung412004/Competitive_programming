#include <bits/stdc++.h>
using namespace std;
const int mod = 1e7;
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

int main(){
    sang();
    int n; cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; i++){
        if (nt[i]){
            s += i;
        }
    }
    cout << s;
    return 0;
}