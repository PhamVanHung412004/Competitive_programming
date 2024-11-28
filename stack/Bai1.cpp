#include <bits/stdc++.h>
using namespace std;
#define int long long int

stack<int> mystack;
signed main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if (s == "show"){
            if (s.size() == 0){
                cout << "EMPTY\n";
            }
            else{
                while(s.size() != 0){
                    cout << mystack.top() << ' ';
                    mystack.pop();
                }
            }
        }
    }
    return 0;
}