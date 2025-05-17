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
//    cout << "请输入若干浮点数（以-1结束）：\n";
//    while (cin >> input && input != -1) {
//        if (count >= 10) {
//            cout << fixed << setprecision(2) << input << "未被录用。" << endl;
//            continue;
//        }
//
//        if (count == 0) {
//            if (input >= 3.50) {
//                collection[count++] = input;
//                sum += input;
//                cout << fixed << setprecision(2) << input << "被录用了。" << endl;
//            } else {
//                cout << fixed << setprecision(2) << input << "未被录用。" << endl;
//            }
//        } else {
//            float average = sum / count;
//            if (input > average) {
//                collection[count++] = input;
//                sum += input;
//                cout << fixed << setprecision(2) << input << "被录用了。" << endl;
//            } else {
//                cout << fixed << setprecision(2) << input << "未被录用。" << endl;
//            }
//        }
//    }
//
//    return 0;
//}