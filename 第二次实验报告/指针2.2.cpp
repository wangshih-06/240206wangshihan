#include <iostream>
#include <cstring>  // 使用 strlen 函数
using namespace std;
int parseHex(const char* const hexString) {
    int length = strlen(hexString);  // 获取十六进制字符串的长度
    int result = 0;                  // 用于存储转换后的十进制数

    for (int i = 0; i < length; i++) {
        char currentChar = hexString[i];
        int currentDigit;

        // 判断字符是0-9
        if (currentChar >= '0' && currentChar <= '9') {
            currentDigit = currentChar - '0';  // 字符0-9转换为整数0-9
        }
        // 判断字符是A-F
        else if (currentChar >= 'A' && currentChar <= 'F') {
            currentDigit = currentChar - 'A' + 10;  // 字符A-F转换为整数10-15
        }
        // 判断字符是a-f
        else if (currentChar >= 'a' && currentChar <= 'f') {
            currentDigit = currentChar - 'a' + 10;  // 字符a-f转换为整数10-15
        }
        // 如果是非法字符
        else {
            return -1;  // 如果包含非合法十六进制字符，则返回错误值 -1
        }

        result = result * 16 + currentDigit;  // 按十六进制规则累加
    }

    return result;
}

int main() {
    const char* hex1 = "A5";  // 示例1
    cout << "十六进制数 " << hex1 << " 转换为十进制为: " << parseHex(hex1) << endl;
    return 0;
}


