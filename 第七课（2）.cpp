//#include <iostream>
//using namespace std;
//int main() {
//    int n;
//    char input[201];
//    cin.getline(input, 201); 
//    cin >> n;
//    for (int i = 0; input[i] != '\0'; i++) {
//        char a = input[i];
//        if (a >= 'a' && a <= 'z') { 
//            input[i] = char((a - 'a' + n + 26) % 26 + 'a'); 
//        }
//        else if (a >= 'A' && a <= 'Z') {
//            input[i] = char((a - 'A' + n + 26) % 26 + 'A'); 
//        }
//        cout << input[i];
//    }
//    cout << endl;
//    return 0;
//}
