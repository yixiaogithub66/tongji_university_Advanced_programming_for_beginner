#include <iostream>
#include <iomanip> // �������������ʽ
using namespace std;

int decimal_conversion_function(int A) {
    cout << A << " " << std::oct << A << " " << std::hex << A << endl;
    return 0;
}

int octal_conversion_function(int B) {
    cout << std::dec << B << " " << std::oct << B << " " << std::hex << B << endl;
    return 0;
}

int hexadecimal_conversion_function(int C) {
    cout << std::dec << C << " " << std::oct << C << " " << std::hex << C << endl;
    return 0;
}

/*int main() {
    cout << "����������������������Ϊʮ���ơ��˽��ơ�ʮ�����ƣ�" << endl;
    int dec;
    int oct;
    int hex;
    cin >> dec;
    cin >> std::oct >> oct;
    cin >> std::hex >> hex;

    decimal_conversion_function(dec);
    octal_conversion_function(oct);
    hexadecimal_conversion_function(hex);

    return 0;
}*/