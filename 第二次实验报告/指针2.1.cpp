#include <iostream>
#include <string>
using namespace std; 
// ��������
int indexof(const string& s1, const string& s2) {
    int len1 = s1.length();  // ��ȡ s1 �ĳ���
    int len2 = s2.length();  // ��ȡ s2 �ĳ���

    if (len1 > len2) {
        return -1;  // ��� s1 ���ȴ��� s2���ض�������
    }
}
    int main()
    {
        string s1, s2;  // ���������ַ���

        cout << "�������ַ���s1: ";
        cin >> s1;

        cout << "�������ַ���s2: ";
        cin >> s2;

        int index = indexof(s1, s2);

        if (index != -1) {
            cout << "�ַ��� \"" << s1 << "\" ���ַ��� \"" << s2 << "\" ���Ӵ�����һ�γ��ֵ�λ����: " << index << endl;
        }
        else {
            cout << "�ַ��� \"" << s1 << "\" �����ַ��� \"" << s2 << "\" ���Ӵ���" << endl;
        }

        return 0;
    }


