#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius, height;
    cout << "������Բ׶����뾶��";
    cin >> radius;
    cout << "������Բ׶�ĸߣ�";
    cin >> height;
    double volume = PI * radius * radius * height / 3;
    cout << "Բ׶�����Ϊ��" << volume << endl;
    return 0;
}