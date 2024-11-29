#include <iostream>
#include <string>
using namespace std;

// �������ڼ���s1�Ƿ�Ϊs2���Ӵ�
int indexOf(const string& s1, const string& s2)
{
    size_t pos = s2.find(s1);
    if (pos != string::npos) {
        return static_cast<int>(pos);
    }
    else {
        return -1;
    }
}

int main()
{
    string s1, s2;

    cout << "Enter the first string";
    cin >> s1;

    cout << "Enter the second string";
    cin >> s2;

    int index = indexOf(s1, s2);

    // ������
    if (index != -1) {
        cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is " << index << endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\") is -1" << endl;
    }
    return 0;
}