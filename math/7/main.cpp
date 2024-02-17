// 100,0000より小さい中で友愛数をすべて出す

#include <iostream>

using namespace std;

int SumDivisor(int x);

int main() {
    for (int i = 1; i < 1000000; ++i) {
        int sum_div = SumDivisor(i);

        if (sum_div > 1000000 || i >= sum_div) {
            continue;
        }

        int pair_sum_div = SumDivisor(sum_div);

        if (i == pair_sum_div) {
            cout << i << " & " << sum_div << endl;
        }
    }

    return 0;
}

int SumDivisor(int x) {
    int sum = 0;
    for (int i = 1; i < x; ++i) {
        if (i * i > x) {
            break;
        }

        if (x % i == 0) {
            sum += i;
            if (i != (x / i) && i != 1) {
                sum += (x / i);
            }
        }
    }
    return sum;
}
