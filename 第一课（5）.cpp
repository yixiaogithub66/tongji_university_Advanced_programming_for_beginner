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

    cout << "��������ĳ�����ݺ����ڵ���ݣ��ÿո�ָ�����" << endl;
    cin >> year_of_birth >> the_current_year;

    if (!check(year_of_birth) || !check(the_current_year) || year_of_birth >= the_current_year) {
        cout << "��������������ȷ���������С�ڵ�ǰ�������1900��2100֮�䡣" << endl;
        return 1;
    }

    int Day = day(year_of_birth, the_current_year);
    cout << "һ��" << Day << "�졣" << endl;
    return 0;
}*/
