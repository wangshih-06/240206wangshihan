#include <iostream>
using namespace std;

int main() {
    const double price_per_apple = 0.8;  // 每个苹果的价格
    int day = 1;                         // 从第一天开始
    int apples_today = 2;                // 第一天买2个苹果
    int total_apples = 0;                // 总苹果数
    double total_cost = 0;               // 总花费

    // 计算每天购买的苹果数并更新总数和总花费
    while (total_apples + apples_today <= 100) {
        total_apples += apples_today;         // 更新总苹果数
        total_cost += apples_today * price_per_apple; // 更新总花费

        // 输出每天的信息
        cout << "Day " << day << ": bought " << apples_today << " apples, total apples: "
            << total_apples << ", total cost: " << total_cost << endl;

        // 更新为前天的两倍，下一天的苹果数
        apples_today *= 2;
        day++;
    }

    // 计算平均花费
    double average_cost = total_cost / day;
    cout << "Average cost per day: " << average_cost << endl;

    return 0;
}
