// 3桁のアームストロング数（ナルシシスト数）をすべて出力する
// https://www.eishinkan.net/creation/ikkan_class/blog/math/column_4.php#:~:text=%E3%83%8A%E3%83%AB%E3%82%B7%E3%82%B7%E3%82%B9%E3%83%88%E6%95%B0%E3%81%A8%E3%81%AF%E3%80%81n,1634%E3%81%AF%E3%83%8A%E3%83%AB%E3%82%B7%E3%82%B7%E3%82%B9%E3%83%88%E6%95%B0%E3%81%A7%E3%81%99%E3%80%82&text=%E8%87%AA%E5%B7%B1%E6%84%9B%E3%81%8C%E5%BC%B7%E3%81%84%E3%81%93%E3%81%A8%E3%82%92%E3%83%8A%E3%83%AB%E3%82%B7%E3%82%B7%E3%82%BA%E3%83%A0%E3%81%A8%E3%81%84%E3%81%84%E3%81%BE%E3%81%99%E3%80%82

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    for (int i = 100; i < 1000; ++i) {
        // 各桁の数値を取り出していく
        int hun = i / 100;
        int ten = (i % 100) / 10;
        int one = i % 10;

        int result =
            std::pow(hun, 3.0) + std::pow(ten, 3.0) + std::pow(one, 3.0);
        if (i == result) {
            cout << i << endl;
        }
    }
}
