//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    char answer[25];
//    cin.getline(answer, 25);
//    size_t n = strlen(answer);  // �� n �����͸�Ϊ size_t
//    char progress[25];
//    for (size_t i = 0; i < n; i++) {  // ѭ������Ҳ��Ϊ size_t
//        progress[i] = '*';
//    }
//    progress[n] = '\0';
//
//    cout << progress << endl;
//
//    char input[25];
//    while (cin.getline(input, 25)) {
//        if (strcmp(input, "end") == 0 && strcmp(progress, answer) == 0) {
//            break;
//        }
//
//        for (size_t i = 0; i < n; i++) {  // ѭ������Ҳ��Ϊ size_t
//            if (progress[i] == '*' && input[i] == answer[i]) {
//                progress[i] = input[i];
//            }
//        }
//
//        cout << progress << endl;
//    }
//
//    return 0;
//}

