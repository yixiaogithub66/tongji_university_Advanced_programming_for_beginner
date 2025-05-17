//#include <iostream>
//#include <cstring> 
//using namespace std;
//
//int main() {
//    char input[201];
//    char output[402]; 
//    cin.getline(input, 201);
//
//    size_t inputLength = strlen(input);
//    int outputIndex = 0;
//    int count = 1;
//
//    for (size_t i = 0; i < inputLength; i++) {
//        if (i + 1 < inputLength && input[i] == input[i + 1]) {
//            count++;
//            if (count > 9) {
//                output[outputIndex++] = input[i];
//                output[outputIndex++] = '9';
//                count = 1;
//            }
//        }
//        else {
//            output[outputIndex++] = input[i];
//            output[outputIndex++] = count + '0'; 
//            count = 1;
//        }
//    }
//    output[outputIndex] = '\0'; 
//
//    if (outputIndex >= inputLength) {
//        cout << "Ñ¹ËõÊ§°Ü£¡" << endl;
//    }
//    else {
//        cout << output << endl;
//    }
//
//    return 0;
//}

