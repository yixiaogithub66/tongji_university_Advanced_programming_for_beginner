//#include <iostream>
//using namespace std;
//
//void output_bytes(int a[], int size) {
//    for (int i = 0; i < size; i++) {
//        char* bytePtr = reinterpret_cast<char*>(&a[i]); 
//        for (int j = 0; j < sizeof(int); j++) { 
//            cout << static_cast<int>(bytePtr[j]) << " "; 
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    const int ARRAY_SIZE = 5; 
//    int a[ARRAY_SIZE];
//
//    cout << "请输入5个整型数：" << endl;
//    for (int i = 0; i < ARRAY_SIZE; i++) {
//        cin >> a[i];
//    }
//
//    cout << "每个字节的十进制值为：" << endl;
//    output_bytes(a, ARRAY_SIZE);
//
//    return 0;
//}


