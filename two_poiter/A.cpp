// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long n, k; cin >> n >> k;
//     vector<long long> a(n + 1);
//     for (int i = 1; i <= n; i++){
//         cin >> a[i];
//     }
//     long long res = 0;
//     for (int i = 1; i <= k; i++){
//         res += a[i];
//     }
//     long long i = 2;
    
//     while(i + k - 1 <= n){
//         res = max(res,res - a[i - 1] + a[i + k - 1]);
//         i++;
//     }
//     cout << res;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <climits> // để sử dụng INT_MIN

using namespace std;

int maxSumKLength(const vector<int>& arr, int k) {
    int n = arr.size();

    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;

    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];  // trừ phần tử đầu và cộng phần tử cuối của cửa sổ
        maxSum = max(maxSum, currentSum);   // cập nhật tổng lớn nhất
    }

    return maxSum;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = maxSumKLength(arr, k);
    cout << result;
    return 0;
}
