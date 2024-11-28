#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        vector<int> index_ood;
        int cnt = 0;
        for(int i = 0; i < a.size(); i++){
            if (a[i] % 2 == 0){
                cnt++;
            }
            else{
                index_ood.push_back(a[i]);
            }
        }

        long long res = ((long long)cnt * ((long long)cnt - 1)) / 2 + (long long)cnt * ((long long)n - (long long)cnt);
        for (int i = 0; i < index_ood.size(); i++){
            for (int j = i + 1; j < index_ood.size(); j++){
                if (gcd(index_ood[i],index_ood[j]) > 1){
                    res ++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}