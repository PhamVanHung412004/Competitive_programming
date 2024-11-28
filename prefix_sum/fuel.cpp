#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a = {0};
    vector<long long> b = {0};
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    vector<long long> pre(n + 1, 0);
    pre[1] = b[1];
    for (int i = 2; i <= n; i++){
        pre[i] = a[i] + pre[i - 1];
    }
    long long h1 = 0;
    vector<long long> value = {0};
    stack<long long> mystack;
    mystack.push(0);
    for (int i = 1; i <= n; i++){
        bool oke = true;
        while(oke){
            bool ok = true;
            long long dx = mystack.top();
            
            int cnt = 0;
            if(b[i] > dx){
                cnt ++;
                mystack.pop();
            //     long long tmp = a[i] - 1;
            //     long res = tmp * b[i];
            //     tmp -= pre[i - 1];
            //     mystack.push(b[i]);
            // }
            // else{
            //     mystack.pop();
            // }
            // mystack.pop();
        }
        // if (b[i] > h1){
        //     long long tmp = b[i];
        //     long long ans = tmp * (a[i] - 1);
        //     ans -= pre[i - 1]; 
        //     value.push_back(ans);
        // }
        // else{
        //     long long tmp = b[i];
        //     long long dis = a[i] - a[i - 1] - 1;
        //     long long ans = tmp * dis;
        //     ans += value[i - 1];
        //     ans -= pre[i - 1];
        //     value.push_back(ans);
        // }
        // h1 = a[i];
    }

    for (int i = 1; i < value.size(); i++){
        cout << value[i]
    }
    return 0;
}
