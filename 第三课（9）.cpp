//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    int input;
//    cin >> input;
//    if (input <= 0 || input > 255) {
//        cout << "�������ʮ������������Ҫ��������1~255�е�һ����" << endl;
//        return 0;
//    }
//    int a, b, c, d, e, f, g, h;
//    a = (input) / 128;
//    b = (input - a * 128) / 64;
//    c = (input - a * 128 - b * 64) / 32;
//    d = (input - a * 128 - b * 64 - c * 32) / 16;
//    e = (input - a * 128 - b * 64 - c * 32 - d * 16) / 8;
//    f = (input - a * 128 - b * 64 - c * 32 - d * 16 - e * 8) / 4;
//    g = (input - a * 128 - b * 64 - c * 32 - d * 16 - e * 8 - f * 4) / 2;
//    h = (input - a * 128 - b * 64 - c * 32 - d * 16 - e * 8 - f * 4 - g * 2);
//    string abcdefgh = to_string(a) + to_string(b) + to_string(c) + to_string(d) + to_string(e) + to_string(f) + to_string(g) + to_string(h);
//    cout << "����ת��Ϊ������Ϊ:" << abcdefgh << endl;
//    return 0;
//}