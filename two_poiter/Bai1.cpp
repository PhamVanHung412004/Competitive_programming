#include <bits/stdc++.h>
using namespace std;
vector<int> mergeTwoSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int i = 0, j = 0;
    vector<int> result;

    // Sử dụng hai con trỏ để duyệt qua hai dãy
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // Thêm các phần tử còn lại của arr1 nếu có
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    // Thêm các phần tử còn lại của arr2 nếu có
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    vector<int> res = mergeTwoSortedArrays(a, b);
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}
