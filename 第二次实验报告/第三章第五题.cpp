#include <iostream>
using namespace std;
// 递归函数，求第n天剩余的桃子数量
int peach(int day) {
    if (day == 10) {
        return 1;  // 第10天剩下1个桃子
    }
    else {
        return 2 * (peach(day + 1) + 1);  // 逆推前一天的桃子数量
    }
}

int main() {
    int total_peaches = peach(1);  // 计算第一天的桃子数量
    cout << "第一天猴子共摘了 " << total_peaches << " 个桃子。" <<endl;
    return 0;
}
