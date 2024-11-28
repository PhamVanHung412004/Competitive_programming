#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    long long total_tmp = int(-1e9);
    long long total = a[i];
    while(i < n && j < n){
        if (total > total_tmp){
            i++;    
            total -= a[i - 1];
        }
        else if (total < total_tmp){
            total = total_tmp;
            j++;
            total += a[j];
        }
        else{
            i++;
            j++;
        }
    }
    return 0;
}