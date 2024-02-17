// 与えられた上限までのセクシー素数をすべて出力する

#include <iostream>

using namespace std;

bool PrimeNumber(int x);

int main() {
    int input;
    cout << "正の整数を入力してください:";
    cin >> input;

    for (int i = 2; i + 6 <= input; ++i) {
        if (PrimeNumber(i) && PrimeNumber(i + 6)) {
            cout << i << " & " << i + 6 << endl;
        }
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