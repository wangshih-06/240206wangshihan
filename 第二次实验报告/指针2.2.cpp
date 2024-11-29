#include <iostream>
#include <cstring>  // ʹ�� strlen ����
using namespace std;
int parseHex(const char* const hexString) {
    int length = strlen(hexString);  // ��ȡʮ�������ַ����ĳ���
    int result = 0;                  // ���ڴ洢ת�����ʮ������

    for (int i = 0; i < length; i++) {
        char currentChar = hexString[i];
        int currentDigit;

        // �ж��ַ���0-9
        if (currentChar >= '0' && currentChar <= '9') {
            currentDigit = currentChar - '0';  // �ַ�0-9ת��Ϊ����0-9
        }
        // �ж��ַ���A-F
        else if (currentChar >= 'A' && currentChar <= 'F') {
            currentDigit = currentChar - 'A' + 10;  // �ַ�A-Fת��Ϊ����10-15
        }
        // �ж��ַ���a-f
        else if (currentChar >= 'a' && currentChar <= 'f') {
            currentDigit = currentChar - 'a' + 10;  // �ַ�a-fת��Ϊ����10-15
        }
        // ����ǷǷ��ַ�
        else {
            return -1;  // ��������ǺϷ�ʮ�������ַ����򷵻ش���ֵ -1
        }

        result = result * 16 + currentDigit;  // ��ʮ�����ƹ����ۼ�
    }

    return result;
}

int main() {
    const char* hex1 = "A5";  // ʾ��1
    cout << "ʮ�������� " << hex1 << " ת��Ϊʮ����Ϊ: " << parseHex(hex1) << endl;
    return 0;
}


