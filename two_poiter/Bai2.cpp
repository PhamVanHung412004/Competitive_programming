#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] < x){
            ans = mid;
            l = mid + 1;            
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n, m; cin >> n >> m;
    vector<int> a,b;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }

    for (int i = 0; i < m; i++){
        int res = BS(a,b[i]);
        cout << res + 1 << " ";
    }
    return 0;
}