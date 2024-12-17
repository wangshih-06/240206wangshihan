#include <iostream>
using namespace std;

// 设置一个长方体的类
class Cuboid {
public:
    double length;  // 定义长方体的长
    double width;   // 定义长方体的宽
    double height;  // 定义长方体的高
    double volume;  // 存储体积

    // 设置一个输入函数
    void inputcuboid() {
        cin >> length >> width >> height;
    }

    // 计算体积的函数
    void caculatevolume() {
        volume = length * width * height;
    }

    // 输出计算所得的体积
    void showvolume() {
        cout << "长方体的体积为 " << volume << "立方米" << endl;
    }
};

int main() {
    Cuboid cuboids[3];  // 创建一个包含3个长方体的数组

    // 输入每个长方体的长宽高
    for (int i = 0; i < 3; i++) {
        cout << "请输入第 " << i + 1 << " 个长方体的长、宽、高：";
        cuboids[i].inputcuboid();
        cuboids[i].caculatevolume();  // 计算体积
    }

    // 输出每个长方体的体积
    for (int i = 0; i < 3; i++) {
        cuboids[i].showvolume();
    }

    return 0;
}
