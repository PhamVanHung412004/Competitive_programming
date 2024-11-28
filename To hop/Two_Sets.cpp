#include <bits/stdc++.h>
using namespace std;
const int mod = 1e6;
int main(){
    vector<long long> a;
    for (int i = 0; i <= mod; i++){
        a.push_back((long long)i);
    }

    for (int i = 1; i <= mod; i++){
        a[i] += a[i - 1];
    }

    long long n; cin >> n;
    if (a[n] % 2 != 0){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        vector<long long> res;
        if ((a[n] / 2) % n == 0){
            long long tmp = a[n] / 4;
            vector<bool> check(n + 1, true);
            check[1] = false;
            check[tmp - 1] = false;
            check[tmp] = false;
            cout << 3 << " \n";
            for (int i = 1; i <= n; i++){
                if (!check[i]){
                    cout << i << " ";
                }
            } 
            cout << "\n";
            cout << tmp - 3 << "\n";
            for (int i = 1; i <= n; i++){
                if (check[i]){
                    cout << i << " ";
                }
            } 
            

        }
        else{
            long long nn = (a[n] / 2) - n;
            vector<long long> res;
            long long i = 1;
            vector<bool> check(n + 1, true);
            while(nn - i >= n){
                check[i] = false;
                res.push_back(i);
                i++;
            }
            check[nn - a[i - 1]] = false;
            res.push_back(nn - a[i - 1]);
            check[n] = false;
            res.push_back(n);

            cout << res.size() << "\n";
            for (int i = 0; i < res.size(); i++){
                cout << res[i] << " ";
            }
            cout << '\n';
            cout << n - res.size() << '\n';
            for (int i = 1; i <= n; i++){
                if (check[i]){
                    cout << i << " ";
                }
            }
        }
    }
    return 0;
}