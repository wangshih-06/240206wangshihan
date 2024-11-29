#include <iostream>
#include <cctype>

// 函数定义，用于统计字符串中每个字母出现的次数
void count(const char s[], int counts[]) {
    // 初始化counts数组元素为0
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }

    int i = 0;
    while (s[i] != '\0') {
        char ch = std::tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            // 统计对应字母出现的次数
            counts[ch - 'a']++;
        }
        ++i;
    }
}
int main() {
    char inputString[1000];  // 假设输入字符串长度不超过1000
    int counts[26];

    std::cout << "请输入一串字符串：";
    std::cin.getline(inputString, sizeof(inputString));

    count(inputString, counts);

    // 输出每个字母出现的次数
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << "字母 " << static_cast<char>('a' + i) << " 出现的次数：" << counts[i] << std::endl;
        }
    }

    return 0;
}