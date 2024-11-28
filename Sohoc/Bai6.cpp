#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
	long long N, M;
    cin >> N >> M;

    long long mod = 1e9 + 7;  // Calculate 10^K for modulus
    long long result = 1;

    // Modular exponentiation to calculate (N^M) % (10^K)
    N = N % mod;
    while (M > 0) {
        if (M % 2 == 1) {
            result = (result * N) % mod;
        }
        M = M / 2;
        N = (N * N) % mod;
    }

    cout << result << endl;
	return 0;
}