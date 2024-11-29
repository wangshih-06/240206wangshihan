#include <iostream>
#include <cctype>

// �������壬����ͳ���ַ�����ÿ����ĸ���ֵĴ���
void count(const char s[], int counts[]) {
    // ��ʼ��counts����Ԫ��Ϊ0
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }

    int i = 0;
    while (s[i] != '\0') {
        char ch = std::tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            // ͳ�ƶ�Ӧ��ĸ���ֵĴ���
            counts[ch - 'a']++;
        }
        ++i;
    }
}
int main() {
    char inputString[1000];  // ���������ַ������Ȳ�����1000
    int counts[26];

    std::cout << "������һ���ַ�����";
    std::cin.getline(inputString, sizeof(inputString));

    count(inputString, counts);

    // ���ÿ����ĸ���ֵĴ���
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << "��ĸ " << static_cast<char>('a' + i) << " ���ֵĴ�����" << counts[i] << std::endl;
        }
    }

    return 0;
}