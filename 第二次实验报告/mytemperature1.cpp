//����ͷ�ļ�
#include "mytemperature.h"
// �����¶ȵ������¶Ⱥ����Ķ���
double celsius_to_fah(double cel) {
    return cel * 9.0 / 5.0 + 32.0;
}

// �����¶ȵ������¶Ⱥ����Ķ���
double fahrenheit_to_cels(double fah) {
    return (fah - 32.0) * 5.0 / 9.0;
}
