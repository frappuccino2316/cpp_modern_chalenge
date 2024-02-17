#include <iostream>
#include <vector>

int main() {
    int input_first;
    int input_second;
    std::cout << "1つ目:";
    std::cin >> input_first;
    std::cout << "2つ目:";
    std::cin >> input_second;

    std::vector<int> a = {}, b = {};

    for (int i = 1; i < input_first + 1; ++i) {
        if (input_first % i == 0) {
            a.emplace_back(i);
        }
    }

    for (int i = 1; i < input_second + 1; ++i) {
        if (input_second % i == 0) {
            b.emplace_back(i);
        }
    }

    for (int i = a.size() - 1; i >= 0; --i) {
        for (int j = b.size() - 1; j >= 0; --j) {
            if (a[i] == b[j]) {
                std::cout << a[i] << std::endl;
                return 0;
            }
        }
    }
}