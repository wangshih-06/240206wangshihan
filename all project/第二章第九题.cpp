#include <iostream>
using namespace std;

int main() {
    const double price_per_apple = 0.8;  // ÿ��ƻ���ļ۸�
    int day = 1;                         // �ӵ�һ�쿪ʼ
    int apples_today = 2;                // ��һ����2��ƻ��
    int total_apples = 0;                // ��ƻ����
    double total_cost = 0;               // �ܻ���

    // ����ÿ�칺���ƻ�����������������ܻ���
    while (total_apples + apples_today <= 100) {
        total_apples += apples_today;         // ������ƻ����
        total_cost += apples_today * price_per_apple; // �����ܻ���

        // ���ÿ�����Ϣ
        cout << "Day " << day << ": bought " << apples_today << " apples, total apples: "
            << total_apples << ", total cost: " << total_cost << endl;

        // ����Ϊǰ�����������һ���ƻ����
        apples_today *= 2;
        day++;
    }

    // ����ƽ������
    double average_cost = total_cost / day;
    cout << "Average cost per day: " << average_cost << endl;

    return 0;
}
