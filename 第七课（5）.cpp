//#include <iostream>
//using namespace std;
//
//int main() {
//    char input[5][5];
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cin >> input[i][j];
//        }
//    }
//
//    char a;
//    cin >> a;
//
//    if (a == 'W') {
//        for (int j = 0; j < 5; j++) { 
//            int writePos = 0; 
//            for (int i = 0; i < 5; i++) { 
//                if (input[i][j] != '*') {
//                    input[writePos][j] = input[i][j];
//                    if (writePos != i) {
//                        input[i][j] = '*';
//                    }
//                    writePos++;
//                }
//            }
//        }
//    }
//    else if (a == 'S') {
//        for (int j = 0; j < 5; j++) { 
//            int writePos = 4; 
//            for (int i = 4; i >= 0; i--) { 
//                if (input[i][j] != '*') {
//                    input[writePos][j] = input[i][j];
//                    if (writePos != i) {
//                        input[i][j] = '*';
//                    }
//                    writePos--;
//                }
//            }
//        }
//    }
//    else if (a == 'A') {
//        for (int i = 0; i < 5; i++) { 
//            int writePos = 0;
//            for (int j = 0; j < 5; j++) { 
//                if (input[i][j] != '*') {
//                    input[i][writePos] = input[i][j];
//                    if (writePos != j) {
//                        input[i][j] = '*';
//                    }
//                    writePos++;
//                }
//            }
//        }
//    }
//    else if (a == 'D') {
//        for (int i = 0; i < 5; i++) { 
//            int writePos = 4; 
//            for (int j = 4; j >= 0; j--) { 
//                if (input[i][j] != '*') {
//                    input[i][writePos] = input[i][j];
//                    if (writePos != j) {
//                        input[i][j] = '*';
//                    }
//                    writePos--;
//                }
//            }
//        }
//    }
//    cout << "位移后的盘面状态为：" << endl;
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            cout << input[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
