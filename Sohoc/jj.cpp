#include <iostream>
#include <cmath>
#include <limits>

#define int long long

using namespace std;

int findOptimalM(int L, int R) {
    auto difference = [&](int M) {
        long long S1 = (M - L + 1) * (M + L) / 2;
        long long S2 = (R - M) * (R + M + 1) / 2;
        return abs(S1 - S2);
    };

    int left = L;
    int right = R - 1;

    while (right - left > 2) {
        int m1 = left + (right - left) / 3;
        int m2 = right - (right - left) / 3;
        if (difference(m1) < difference(m2)) {
            right = m2;
        } else {
            left = m1;
        }
    }

    int bestM = left;
    long long bestDiff = difference(left);
    for (int M = left + 1; M <= right; ++M) {
        long long currentDiff = difference(M);
        if (currentDiff < bestDiff) {
            bestDiff = currentDiff;
            bestM = M;
        }
    }

    return bestM;
}

signed main() {
    int L = 2;
    int R = 7;
    cin >> L >> R;
    int optimalM = findOptimalM(L, R);
    cout << optimalM << endl;
    return 0;
}