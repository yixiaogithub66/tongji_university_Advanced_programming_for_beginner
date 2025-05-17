//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string str; 
//    string command;
//
//    while (true) {
//        cout << "请输入操作编号（1-5），或输入q退出程序：" << endl;
//        cin >> command;
//
//        if (command == "q") {
//            if (!str.empty()) {
//                cout << str << endl; 
//            }
//            break;
//        }
//
//        int operation = stoi(command);
//        switch (operation) {
//        case 1: { 
//            cout << "字符串长度为：" << str.length() << endl;
//            break;
//        }
//        case 2: { 
//            if (!str.empty()) {
//                cout << str << endl;
//            }
//            break;
//        }
//        case 3: { 
//            char flipType;
//            cout << "请输入翻转类型（L 或 U）：" << endl;
//            cin >> flipType;
//            if (flipType == 'L') {
//                for (char& c : str) {
//                    if (c >= 'A' && c <= 'Z') {
//                        c = c + 32; 
//                    }
//                }
//            }
//            else if (flipType == 'U') {
//                for (char& c : str) {
//                    if (c >= 'a' && c <= 'z') {
//                        c = c - 32; 
//                    }
//                }
//            }
//            break;
//        }
//        case 4: { 
//            string s;
//            int n;
//            cout << "请输入插入字符串和插入位置：" << endl;
//            cin >> s >> n;
//            if (n >= 0 && n <= str.length()) {
//                str.insert(n, s);
//            }
//            break;
//        }
//        case 5: { 
//            string s1, s2;
//            cout << "请输入要替换的子串和替换内容：" << endl;
//            cin >> s1 >> s2;
//            size_t pos = str.find(s1);
//            if (pos != string::npos) {
//                str.replace(pos, s1.length(), s2);
//            }
//            break;
//        }
//        default:
//            cout << "无效的操作编号，请重新输入！" << endl;
//            break;
//        }
//    }
//
//    return 0;
//}


