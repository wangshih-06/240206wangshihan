#include <iostream>
using namespace std;
// �ݹ麯�������n��ʣ�����������
int peach(int day) {
    if (day == 10) {
        return 1;  // ��10��ʣ��1������
    }
    else {
        return 2 * (peach(day + 1) + 1);  // ����ǰһ�����������
    }
}

int main() {
    int total_peaches = peach(1);  // �����һ�����������
    cout << "��һ����ӹ�ժ�� " << total_peaches << " �����ӡ�" <<endl;
    return 0;
}
