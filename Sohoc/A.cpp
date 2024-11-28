#include <bits/stdc++.h>
using namespace std;

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


int lower(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] == x){
            ans = mid;
            r = mid - 1;
        }
        else if (arr[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}

int upper(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size() - 1;
    int ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if (arr[mid] == x){
            ans = mid;
            l = mid + 1;
        }
        else if (arr[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}

int main(){
    string s; cin >> s;
    vector<int> a;
    map<int,int> mymap;
    for (int i = 0; i < s.size(); i++){
        a.push_back(s[i] - '0');
        mymap[s[i] - '0'] ++;
    }
    for (auto it : mymap){
        if (check(it.first)){
            cout << it.first << " " << it.second << "\n";
        }
    }
    cout << '\n';
    vector<int> res;
    set<int> b;
    for (int i = 0; i < a.size(); i++){
        if (b.find(a[i]) == b.end()){
            res.push_back(a[i]);
        }
        b.insert(a[i]);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < res.size(); i++){
        int l = lower(a,res[i]);
        int r = upper(a,res[i]);
        if (l != -1 && r != -1){
            if (check(res[i])){
                cout << res[i] << " " << r - l + 1 << "\n";
            }
        }
    }   
    return 0;
}
