#include <iostream>
#include <vector>
using namespace std;
const int mod = 1e9 + 7;
// Hàm tính tổ hợp C(n, k) sử dụng quy hoạch động
vector<vector<long long>> combination(int n, int k) {
    vector<vector<long long>> C(n + 1, vector<long long>(k + 1, 0));

    // Tính toán các giá trị tổ hợp theo công thức quy hoạch động
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;  // Trường hợp cơ sở
            } else {
                C[i][j] = (C[i - 1][j - 1] % mod + C[i - 1][j] % mod);
                C[j][j] %= mod;
            }
        }
    }
    return C;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vector<long long>> res = combination(1001,1001);
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout <<  res[n][k] << '\n';
    }
    return 0;
}
