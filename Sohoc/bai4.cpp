#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    long long mod = pow(10, K);  // Calculate 10^K for modulus
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
