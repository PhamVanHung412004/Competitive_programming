// #include <bits/stdc++.h>
// using namespace std;
// const int mod = 100;
// long long a[mod + 1][mod + 1];

// int main(){
//     for (int i = 1; i <= mod; i++){
//         for (int j = 1; j <= mod; j++){
//             a[i][j] = 1;
//         }
//     }
//     int n; cin >> n;
//     int max_x = n;
//     int min_x = 1;
//     int x_center = n/2;
//     int y_center = n/2;
//     if (n % 2 != 0){
//         x_center ++;
//         y_center ++;
//     }
//     else{
//         x_center ++;
//     }
//     int tmp1 = 1;
//     int tmp2 = 1;
//     int i = 0;
//     int j = 0;
//     bool oke = true;
//     while(oke){
//         i += tmp1;
//         j += tmp2;      
//         while(j <= max_x){
//             a[i][j] += a[i][j - 1];
//             j++;
//         }
//         j--;
//         if (j == max_x){
//             i++;
//             while(i <= max_x){
//                 a[i][j] += a[i - 1][j];
//                 i++;
//             }
//             i--;
//         }
//         if (i == max_x){
//             j--;
//             while(j >= 1){
//                 a[i][j] += a[i][j + 1];
//                 j--;
//             }   
//             j++;
//         }
//         if (j == 1){
//             max_x--;
//             i--;
//             min_x ++;
//             while(i >= min_x){
//                 a[i][j] += a[i + 1][j];
//                 i--;
//             }
//             i = tmp1;
//             j = tmp2;
//             tmp1++;
//             tmp2++;
//             cout << i << " " << j;
//         }
//         if (i == x_center && j == y_center){
//             oke = false;
//         }
//         // if (i == 1 && j == 1){
//         //     break;
//         // }
//         // else{
//         //     i--;
//         //     j--;
//         // }
//     }
//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++){
//             cout << a[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

void taoMaTranXoanOc(int n) {
    int maTran[n][n];
    int hangDau = 0, hangCuoi = n - 1;
    int cotDau = 0, cotCuoi = n - 1;
    int giaTri = 1;

    while (hangDau <= hangCuoi && cotDau <= cotCuoi) {
        // Điền hàng trên cùng từ trái sang phải
        for (int i = cotDau; i <= cotCuoi; i++) {
            maTran[hangDau][i] = giaTri++;
        }
        hangDau++;

        // Điền cột phải từ trên xuống dưới
        for (int i = hangDau; i <= hangCuoi; i++) {
            maTran[i][cotCuoi] = giaTri++;
        }
        cotCuoi--;

        // Điền hàng dưới cùng từ phải sang trái
        if (hangDau <= hangCuoi) {
            for (int i = cotCuoi; i >= cotDau; i--) {
                maTran[hangCuoi][i] = giaTri++;
            }
            hangCuoi--;
        }

        // Điền cột trái từ dưới lên trên
        if (cotDau <= cotCuoi) {
            for (int i = hangCuoi; i >= hangDau; i--) {
                maTran[i][cotDau] = giaTri++;
            }
            cotDau++;
        }
    }

    // In ma trận xoắn ốc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << maTran[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    taoMaTranXoanOc(n);

    return 0;
}
