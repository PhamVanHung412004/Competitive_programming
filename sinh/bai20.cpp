#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int n; cin >> n;
    int t = 2;
    set<string> myset;
    while(t <= n){
        for (int i = 1; i <= t / 2; i++){
            a[i] = 0;
        }
        bool oke = true;
        while(oke){
            string tmp = "";
            for (int i = 1; i <= t / 2; i++){
                tmp += to_string(a[i]);
            }
            for (int i = t / 2; i >= 1; i--){
                tmp += to_string(a[i]);
            }
            myset.insert(tmp);
            int i = t / 2;
            while(i >= 1 && a[i] == 0){
                a[i] = 1;
                i--;
            }
            if (i == 0){
                oke = false;
            }
            else{
                a[i] = 1;
            }
        }
        t += 2;
    }

    for (auto it : myset){
        cout << it << " ";
    }
    return 0;
}