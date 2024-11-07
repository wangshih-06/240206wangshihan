#include <iostream>
int main() {
    char ch;
    std::cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
    std::cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        std::cout << static_cast<char>(ch - 32) << std::endl;
    }
    else {
        std::cout << static_cast<int>(ch + 1) << std::endl;
    }
    return 0;
}