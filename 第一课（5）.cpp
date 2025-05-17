#include <iostream>
using namespace std;

int day(int A, int B) {
    return (B - A) * 365;
}

bool check(int year) {
    return year >= 1900 && year <= 2100;
}

/*int main() {
    int year_of_birth;
    int the_current_year;

    cout << "请输入你的出生年份和现在的年份（用空格分隔）：" << endl;
    cin >> year_of_birth >> the_current_year;

    if (!check(year_of_birth) || !check(the_current_year) || year_of_birth >= the_current_year) {
        cout << "输入的年份有误，请确保出生年份小于当前年份且在1900到2100之间。" << endl;
        return 1;
    }

    int Day = day(year_of_birth, the_current_year);
    cout << "一共" << Day << "天。" << endl;
    return 0;
}*/
