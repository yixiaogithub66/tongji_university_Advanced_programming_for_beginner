//#include <iostream>
//#include <string>
//using namespace std;
//
//void skipSpaces(const string& s, int& pos) {
//    while (pos < s.size() && isspace(s[pos])) {
//        pos++;
//    }
//}
//
//bool parseInteger(const string& s, int& pos) {
//    if (pos >= s.size()) return false;
//    if (s[pos] == '-') {
//        pos++;
//        if (pos >= s.size() || !isdigit(s[pos])) {
//            return false;
//        }
//    }
//    else if (!isdigit(s[pos])) {
//        return false;
//    }
//    while (pos < s.size() && isdigit(s[pos])) {
//        pos++;
//    }
//    return true;
//}
//
//bool parseElement(const string& s, int& pos); 
//
//bool parseList(const string& s, int& pos) {
//    if (pos >= s.size() || s[pos] != '[') return false;
//    pos++;
//    skipSpaces(s, pos);
//    if (pos < s.size() && s[pos] == ']') {
//        pos++;
//        return true;
//    }
//    while (true) {
//        if (!parseElement(s, pos)) {
//            return false;
//        }
//        skipSpaces(s, pos);
//        if (pos < s.size() && s[pos] == ',') {
//            pos++;
//            skipSpaces(s, pos);
//        }
//        else if (pos < s.size() && s[pos] == ']') {
//            pos++;
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//}
//
//bool parseElement(const string& s, int& pos) {
//    skipSpaces(s, pos);
//    if (pos < s.size() && s[pos] == '[') {
//        return parseList(s, pos);
//    }
//    else if (pos < s.size() && (isdigit(s[pos]) || s[pos] == '-')) {
//        return parseInteger(s, pos);
//    }
//    else {
//        return false;
//    }
//}
//
//bool is_valid(const string& s, int& pos) {
//    return parseList(s, pos);
//}
//
//bool check_list(const string& input) {
//    if (input.empty() || input.front() != '[' || input.back() != ']') {
//        return false;
//    }
//    int pos = 0;
//    return is_valid(input, pos) && pos == input.size();
//}
//
//int main() {
//    string input;
//    getline(cin, input);
//    if (check_list(input)) {
//        cout << "格式合法！" << endl;
//    }
//    else {
//        cout << "格式非法！" << endl;
//    }
//    return 0;
//}


