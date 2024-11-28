#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<bool> check(n + 1, true);
    vector<int> one;
    vector<int> zero;
    
    for (int i = 1; i <= n; i++){
        if (check[i]){
            if (a[i] == 1){
                int t = i;
                int cnt = 0;
                while(a[t] != 0){
                    cout << a[t] << " ";
                    check[t] = false;
                    cnt++;
                    t++;
                }
                one.push_back(cnt);
            }
            else{
                int t = i;
                int cnt = 0;
                while(a[t] != 1){
                    check[t] = false;
                    cnt++;    
                    t++;
                }
                zero.push_back(cnt);

            }
        }
    }
    for (auto it : one){
        cout << it << " ";
    }
    cout << '\n';
    for (auto it : zero){
        cout << it << " ";

    }
    return 0;
}