#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b; cin >> a >> b;
    if (a % b == 0){
        cout << a / b;
    }
    else{
        cout << a / b + 1;
    }
    return 0;
}