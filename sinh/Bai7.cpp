#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> ans;
    vector<int> a;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        ans.push_back(s);
        a.push_back(i + 1);
    }
    sort(ans.begin(), ans.end());
    do{
        for (int i = 0; i < a.size(); i++){
            cout << ans[a[i] - 1] << " ";
        }
        cout << '\n';
    }
    while(next_permutation(a.begin(), a.end()));
    return 0;
}