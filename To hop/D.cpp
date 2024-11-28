#include <bits/stdc++.h>
using namespace std;
int main() {
    double angle_degrees = 45.0;


    for (int i = 0; i <= 90; i++){
        double angle_radians = 1.0 * i * M_PI / 180.0;
        double result = 1.0 * 3 * cos(angle_radians);
        cout << result << "\n";
    }

    // std::cout << "Tan(" << angle_degrees << " độ) = " << result << std::endl;

    return 0;
}
