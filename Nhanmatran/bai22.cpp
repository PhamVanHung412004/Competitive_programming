#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<int>> a = {{-1}};
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < n; j++){
            int x; cin >> x;
            tmp.push_back(x);
        }   
        a.push_back(tmp);
    }

    for (int i = 1; i <= a.size(); i++){
        if (i % 2 == 0){
            for (int j = a[i].size() - 1; j >= 0; j--){
                cout << a[i][j] << " ";
            }
        }
        else{
            for (int j = 0; j < a[i].size(); j++){
                cout << a[i][j] << " ";
            }
        }
        cout << '\n';
    }        

    return 0;
}