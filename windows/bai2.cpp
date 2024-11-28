#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Khởi tạo một unordered_map với khóa là chuỗi và giá trị là số nguyên
    std::unordered_map<std::string, int> myMap;

    // Thêm phần tử vào unordered_map
    myMap["apple"] = 5;
    myMap["banana"] = 2;
    myMap["cherry"] = 7;

    // Truy cập phần tử thông qua khóa
    std::cout << "The quantity of bananas is: " << myMap["banana"] << std::endl;

    // Kiểm tra xem một khóa có tồn tại không
    if (myMap.find("apple") != myMap.end()) {
        std::cout << "Apple exists in the map with quantity: " << myMap["apple"] << std::endl;
    } else {
        std::cout << "Apple does not exist in the map." << std::endl;
    }

    // Duyệt qua các phần tử trong unordered_map
    std::cout << "All elements in the unordered_map:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Xóa phần tử dựa trên khóa
    myMap.erase("banana");
    std::cout << "After erasing 'banana':" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
