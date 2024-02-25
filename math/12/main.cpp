// 100万までの数において、最長コラッツ数列となる数とその数列の長さを出力する
// コラッツの予想とは、正の整数nが偶数の場合は2で割り、そうでない場合は3をかけて1足すという操作をこり返すとどんな数でも必ず1になるという予想
// コラッツ数列は数の変化の過程を数列にしたもの

// メモ
// おそらく2の累乗ではない
// 2の累乗になった場合、ひたすら2で割られ続けて1になるはず

#include <iostream>

using namespace std;

unsigned int collatzCount(unsigned int x) {
    unsigned int now = x;
    int count = 1;
    while (now != 1) {
        if (now % 2 == 0) {
            now /= 2;
            count += 1;
        } else {
            now = (now * 3) + 1;
            count += 1;
        }
    }

    return count;
}

int main() {
    unsigned int max = 0;
    unsigned int max_count = 0;
    for (unsigned int i = 1; i < 1000001; ++i) {
        if (i % 1000 == 0) {
            cout << i << "回目" << endl;
        }
        unsigned int result = collatzCount(i);
        if (max_count < result) {
            max = i;
            max_count = result;
        }
    }

    cout << "最もコラッツ数列が長くなる数:" << max
         << "\n数列の長さ:" << max_count << endl;
}
