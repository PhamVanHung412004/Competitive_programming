    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    int n;
    signed main(){
        cin >> n;
        map<int,vector<int>> mymap;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            mymap[x].push_back(i);
        }
        int res = 0;
        int index = 0;
        int cnt = 0;
        for (auto it : mymap){
            if (it.second.size() >= 2){
                vector<int> tmp = it.second;
                int first_value = tmp[0];
                res = max(res,first_value - index + 1);
                index = tmp[tmp.size() - 1];
            }
            else{
                res = max(res,cnt);
            }
            cnt++;
        }
        cout << res;
        return 0;
    }