#include <iostream>
using namespace std;

class Time {
private:  // ���ݳ�Ա��Ϊ˽��
    int hour;
    int minute;
    int sec;

public:
    // ���ó�Ա��������������ʱ��
    void inputtime() {
        cout << "������ʱ�䣨Сʱ ���� �룩��";
        cin >> hour >> minute >> sec;
    }

    // ���ó�Ա�������������ʱ��
    void output() {
        cout << hour << "��" << minute << "��" << sec << endl;
    }
};

int main() {
    Time t1;  // ����Time�����

    t1.inputtime();  // ���ó�Ա������������
    t1.output();  // ���ó�Ա�����������

    return 0;
}
