//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string str; 
//    string command;
//
//    while (true) {
//        cout << "�����������ţ�1-5����������q�˳�����" << endl;
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
//            cout << "�ַ�������Ϊ��" << str.length() << endl;
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
//            cout << "�����뷭ת���ͣ�L �� U����" << endl;
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
//            cout << "����������ַ����Ͳ���λ�ã�" << endl;
//            cin >> s >> n;
//            if (n >= 0 && n <= str.length()) {
//                str.insert(n, s);
//            }
//            break;
//        }
//        case 5: { 
//            string s1, s2;
//            cout << "������Ҫ�滻���Ӵ����滻���ݣ�" << endl;
//            cin >> s1 >> s2;
//            size_t pos = str.find(s1);
//            if (pos != string::npos) {
//                str.replace(pos, s1.length(), s2);
//            }
//            break;
//        }
//        default:
//            cout << "��Ч�Ĳ�����ţ����������룡" << endl;
//            break;
//        }
//    }
//
//    return 0;
//}


