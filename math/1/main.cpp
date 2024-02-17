#include <iostream>

int main() {
    int input;
    int sum;

    std::cout << "整数を入力してください：";
    std::cin >> input;

    for (int i = 1; i < input + 1; ++i) {
        if (i % 5 == 0) {
            sum += i;
        } else if (i % 3 == 0) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;
}
