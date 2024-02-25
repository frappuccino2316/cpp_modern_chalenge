// 2進数で5ビットのすべての数について2進数表記、グレイコード表記、グレイコード複合値を出力する

#include <bitset>
#include <iostream>

using namespace std;

bitset<5> toBit5(int x) {
    bitset<5> bit(x);
    return x;
}

int main() {
    int start = 0b00000;
    int end = 0b11111;

    for (int i = 0; i <= end; ++i) {
        int gray = i ^ (i >> 1);
        int gray_copy = gray;
        for (unsigned int bit = 1u << 31; bit > 1; bit >>= 1) {
            if (gray_copy & bit) {
                gray_copy ^= bit >> 1;
            }
        }

        cout << i << ", 2進数:" << toBit5(i)
             << ", グレイコード:" << toBit5(gray) << ", " << gray_copy << endl;
    }
}
