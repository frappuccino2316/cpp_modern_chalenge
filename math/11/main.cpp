// ローマ数字に変換する

#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, unordered_map<int, string>> roma_num = {
    {1,
     {
         {1, "Ⅰ"},
         {2, "Ⅱ"},
         {3, "Ⅲ"},
         {4, "Ⅳ"},
         {5, "Ⅴ"},
         {6, "Ⅵ"},
         {7, "Ⅶ"},
         {8, "Ⅷ"},
         {9, "Ⅸ"},
     }},
    {10, {{1, "Ⅹ"}, {5, "L"}}},
    {100, {{1, "C"}, {5, "D"}}},
    {1000, {{1, "M"}}}};

string toRoma(unsigned int x) {
    if (x > 4000) {
        return "大きすぎです";
    }

    string result = "";

    for (unsigned int i = 0; i < x / 1000; ++i) {
        result += roma_num[1000][1];
    };

    unsigned int rest = x % 1000;
    unsigned int third_digit = rest / 100;
    if (third_digit > 4) {
        result += roma_num[100][5];
        for (unsigned int i = 0; i < third_digit - 5; ++i) {
            result += roma_num[100][1];
        }
    } else if (third_digit == 4) {
        result += roma_num[100][1];
        result += roma_num[100][5];
    } else {
        for (unsigned int i = 0; i < third_digit; ++i) {
            result += roma_num[100][1];
        };
    }

    rest = x % 100;
    unsigned int second_digit = rest / 10;
    if (second_digit > 4) {
        result += roma_num[10][5];
        for (unsigned int i = 0; i < second_digit - 5; ++i) {
            result += roma_num[10][1];
        }
    } else if (second_digit == 4) {
        result += roma_num[10][1];
        result += roma_num[10][5];
    } else {
        for (unsigned int i = 0; i < second_digit; ++i) {
            result += roma_num[10][1];
        };
    }

    rest = x % 10;
    result += roma_num[1][rest];

    return result;
}

int main() {
    unsigned int input;
    cout << "4000以下の数値を入力：";
    cin >> input;

    string result = toRoma(input);

    cout << result << endl;
}
