#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] >= x){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}

int BS1(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] <= x){
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, t; cin >> n >> t;
    string s; cin >> s;
    s.insert(s.begin() + 0,'+');
    map<char,vector<int>> a;
    for (int i = 1; i <= s.size(); i++){
        a[s[i]].push_back(i);
    }

    while(t--){
        char c; cin >> c;
        int l, r; cin >> l >> r;
        int left = BS(a[c],l);
        int right = BS1(a[c],r);
        if (left != -1 && right != -1){
            cout << right - left + 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}