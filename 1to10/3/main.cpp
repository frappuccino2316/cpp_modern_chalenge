#include <iostream>
#include <vector>

int Gcd(int first, int second);

int main() {
    int input_first;
    int input_second;
    std::cout << "1つ目:";
    std::cin >> input_first;
    std::cout << "2つ目:";
    std::cin >> input_second;

    int gcd = Gcd(input_first, input_second);
    // 最小公倍数 = a * b / 最大公約数で出せる
    std::cout << input_first * input_second / gcd << std::endl;

    return 0;
}

int Gcd(int first, int second) {
    std::vector<int> a = {}, b = {};

    for (int i = 1; i < first + 1; ++i) {
        if (first % i == 0) {
            a.emplace_back(i);
        }
    }

    for (int i = 1; i < second + 1; ++i) {
        if (second % i == 0) {
            b.emplace_back(i);
        }
    }

    for (int i = a.size() - 1; i >= 0; --i) {
        for (int j = b.size() - 1; j >= 0; --j) {
            if (a[i] == b[j]) {
                return a[i];
            }
        }
    }
    return 1;
}
