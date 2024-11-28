#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        if (x * 2 == y || x == 2 * y){
            cout << "YES\n";
        }
        else if (x == 3 && y == 3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}