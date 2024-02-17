// 与えられた上限までの過剰数（約数の総和がその数の２倍より大きい数）とその過剰を表示する

#include <iostream>

using namespace std;

int SumDivisor(int x);

int main() {
    int input;
    cout << "正の整数を入力してください:";
    cin >> input;

    for (int i = 1; i <= input; ++i) {
        int sum = SumDivisor(i);
        if (i * 2 < sum) {
            cout << i << ", 合計:" << sum << endl;
        }
    }
}

int SumDivisor(int x) {
    int sum = 0;
    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum;
}
