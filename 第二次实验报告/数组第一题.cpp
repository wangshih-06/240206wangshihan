#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> uniqueSet;
    int num;

    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        uniqueSet.insert(num);  // ШЅжи
    }

    cout << "The distict numbers are:" << endl;
    for (const auto& n : uniqueSet) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
