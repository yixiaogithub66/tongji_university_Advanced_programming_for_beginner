//#include <iostream>
//using namespace std;
//
//int main() {
//    int input[20];
//    cout << "������20��������" << endl;
//    for (int i = 0; i < 20; i++) {
//        cin >> input[i];
//    }
//    for (int i = 0; i < 20 - 1; i++) { 
//        for (int j = 0; j < 20 - 1 - i; j++) {
//            if (input[j] > input[j + 1]) {
//                int a = input[j];
//                input[j] = input[j + 1];
//                input[j + 1] = a;
//            }
//        }
//    }
//
//    cout << "���������Ľ����" << endl;
//    for (int i = 0; i < 20; i++) {
//        cout << input[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
