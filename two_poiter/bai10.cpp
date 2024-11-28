#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool check(vector<int> &arr, int s){
    int l = 0;
    int r = arr.size() - 1;
    while(l < r){
        if (arr[l] + arr[r] == s){
            return true;
        }
        else if (arr[l] + arr[r] < s){
            l++;
        }
        else{
            r--;
        }
    }
    return false;
}

signed main(){
    int n,s; cin >> n >> s;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    if (check(a,s)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}