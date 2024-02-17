// 与えられた正の整数より小さい最大の素数

#include <iostream>

using namespace std;

bool PrimeNumber(int x);
int MaxPrimeNumber(int x);

int main() {
    int input;
    cout << "正の整数を入力してください:";
    cin >> input;

    int answer = MaxPrimeNumber(input);
    if (answer == 0) {
        cout << "指定された数より小さい素数はありません" << endl;
    } else {
        cout << answer << endl;
    }

    return 0;
}

bool PrimeNumber(int x) {
    if (x < 2)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;

    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int MaxPrimeNumber(int x) {
    int max = 0;
    for (int i = 1; i < x; ++i) {
        if (PrimeNumber(i)) {
            max = i;
        }
    }
    return max;
}
