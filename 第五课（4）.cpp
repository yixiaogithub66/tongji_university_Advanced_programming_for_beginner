//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    float collection[10];
//    int count = 0;
//    float input;
//    float sum = 0.0;
//
//    cout << "���������ɸ���������-1��������\n";
//    while (cin >> input && input != -1) {
//        if (count >= 10) {
//            cout << fixed << setprecision(2) << input << "δ��¼�á�" << endl;
//            continue;
//        }
//
//        if (count == 0) {
//            if (input >= 3.50) {
//                collection[count++] = input;
//                sum += input;
//                cout << fixed << setprecision(2) << input << "��¼���ˡ�" << endl;
//            } else {
//                cout << fixed << setprecision(2) << input << "δ��¼�á�" << endl;
//            }
//        } else {
//            float average = sum / count;
//            if (input > average) {
//                collection[count++] = input;
//                sum += input;
//                cout << fixed << setprecision(2) << input << "��¼���ˡ�" << endl;
//            } else {
//                cout << fixed << setprecision(2) << input << "δ��¼�á�" << endl;
//            }
//        }
//    }
//
//    return 0;
//}