//#include <iostream>  
//#include <iomanip>  
//using namespace std;
//
//int main() {
//    float collection[10] = { 0 };
//    int count = 0;
//    float input;
//    float sum = 0.0;
//
//    cout << "���������ɸ���������-1��������\n";
//    while (cin >> input && input != -1) {
//        if (count == 0) {
//            if (input >= 3.50) {
//                collection[count++] = input;
//                sum += input;
//            }
//        }
//        else {
//            float average = sum / count;
//            if (input > average) {
//                if (count < 10) {
//                    collection[count++] = input;
//                    sum += input;
//                }
//                else {
//                    for (int i = 0; i < 10; i++) {
//                        for (int j = 0; j < 10 - 1 - i; j++) {
//                            if (collection[j] > collection[j + 1]) {
//                                float a = collection[j];
//                                collection[j] = collection[j + 1];
//                                collection[j + 1] = a;
//                            }
//                        }
//                    }
//                    if (input >= collection[0]) {
//                        sum -= collection[0];
//                        collection[0] = input;
//                        sum += collection[0];
//                    }
//                }
//            }
//        }
//    }
//
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10 - 1 - i; j++) {
//            if (collection[j] < collection[j + 1]) {
//                float a = collection[j];
//                collection[j] = collection[j + 1];
//                collection[j + 1] = a;
//            }
//        }
//    }
//
//    cout << "���ձ�¼�ü������Ϊ:" << endl;
//    for (int i = 0; i < count; i++) {
//        cout << fixed << setprecision(2) << collection[i] << " ";
//    }
//    cout << endl;
//    cout << "ƽ������:" << endl;
//    if (count > 0) {
//        cout << fixed << setprecision(2) << sum / count << endl;
//    }
//    else {
//        cout << "0.00" << endl;
//    }
//    return 0;
//}
