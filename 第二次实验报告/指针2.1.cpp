#include <iostream>
#include <string>
using namespace std; 
// 函数声明
int indexof(const string& s1, const string& s2) {
    int len1 = s1.length();  // 获取 s1 的长度
    int len2 = s2.length();  // 获取 s2 的长度

    if (len1 > len2) {
        return -1;  // 如果 s1 长度大于 s2，必定不是子
    }
}
    int main()
    {
        string s1, s2;  // 定义两个字符串

        cout << "请输入字符串s1: ";
        cin >> s1;

        cout << "请输入字符串s2: ";
        cin >> s2;

        int index = indexof(s1, s2);

        if (index != -1) {
            cout << "字符串 \"" << s1 << "\" 是字符串 \"" << s2 << "\" 的子串，第一次出现的位置是: " << index << endl;
        }
        else {
            cout << "字符串 \"" << s1 << "\" 不是字符串 \"" << s2 << "\" 的子串。" << endl;
        }

        return 0;
    }


