//#include <iostream>
//#include <cmath> 
//using namespace std;
//
//// �ж��Ƿ�Ϊ����
//bool shifouzhishu(int n) {
//    if (n <= 1) return false; 
//    if (n == 2) return true;  
//    if (n % 2 == 0) return false; 
//    for (int i = 3; i <= sqrt(n); i += 2) {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    const int NUM_LIGHTS = 100; 
//    int light[NUM_LIGHTS] = { 0 }; 
//    int input;
//
//    cout << "������ң����������1-4������ -1 ������" << endl;
//
//    while (true) {
//        cin >> input;
//        if (input == -1) break; // ���� -1 ��������
//
//        for (int n = 0; n < NUM_LIGHTS; ++n) {
//            if (input == 1 && shifouzhishu(n)) {
//                light[n] = (light[n] + 1) % 3;
//            }
//            else if (input == 2 && n > 1 && !shifouzhishu(n)) {
//                light[n] = (light[n] + 1) % 3;
//            }
//            else if (input == 3 && n % 2 != 0) {
//                light[n] = (light[n] + 1) % 3;
//            }
//            else if (input == 4 && n % 2 == 0) {
//                light[n] = (light[n] + 1) % 3;
//            }
//        }
//    }
//
//    cout << "Ϩ��";
//    for (int n = 0; n < NUM_LIGHTS; ++n) {
//        if (light[n] == 0) {
//            cout << n << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "������";
//    for (int n = 0; n < NUM_LIGHTS; ++n) {
//        if (light[n] == 1) {
//            cout << n << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "��˸��";
//    for (int n = 0; n < NUM_LIGHTS; ++n) {
//        if (light[n] == 2) {
//            cout << n << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}
