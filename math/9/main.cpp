// 正の整数を素因数分解する

#include <iostream>
#include <unistd.h>
#include <vector>

using namespace std;

bool CanPrimeFactorization(int x);
int MinPrimeNumber(int x);

int main() {
    int input;
    cout << "正の整数を入力:";
    cin >> input;

    vector<int> x = {};

    while (CanPrimeFactorization(input)) {
        cout << input << "のターン" << endl;
        int min = MinPrimeNumber(input);
        x.emplace_back(min);
        input = input / min;
        // usleep(1000);
    }
    if (input != 1)
        x.emplace_back(input);

    for (int i = 0; i < x.size() - 1; ++i) {
        cout << x[i] << " * ";
    }
    cout << x[x.size() - 1];
}

bool CanPrimeFactorization(int x) {
    if (x < 2)
        return false;
    if (x == 2)
        return false;
    if (x % 2 == 0)
        return true;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return true;
    }
    return false;
}

int MinPrimeNumber(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return i;
        }
    }
    return x;
}