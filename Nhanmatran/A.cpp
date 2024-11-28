#include <bits/stdc++.h>
using namespace std;
int a[201][201];
bool check(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int ii = 1;
    int jj = 1;
    set<int> myset;
    while(ii <= n && jj <= n){
        if (check(a[ii][jj])){
            myset.insert(a[ii][jj]);
        }
        ii++;
        jj++;
    }

    int iii = 1;
    int jjj = n;
    while(iii <= n && jjj >= 1){
        if (check(a[iii][jjj])){
            myset.insert(a[iii][jjj]);
        }
        iii++;
        jjj--;
    }
    cout << myset.size();

    return 0;
}