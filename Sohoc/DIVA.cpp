#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int,int>> value;
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            value.push_back(make_pair(x,y));
        }
        sort(value.begin(), value.end());
        long long s = 0;
        long long tmp = 0;
        for (int i = 0; i < value.size(); i++){
            long long aa = abs(value[i].first - tmp);
            if (value[i].first == value[i - 1].first && value[i].second > value[i - 1].second){
                value[i].second = value[i].second - value[i - 1].second;
            }
            s += 2 * (aa + value[i].second);
            tmp = value[i].first; 
        }
        cout << s << "\n";
    }
    return 0;
}