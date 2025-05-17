//#include <iostream>
//#include <cstring>
//using namespace std;
//bool wheter_double_quotes(char input[400]) {
//	int len = strlen(input);
//	for (int i = 0; i < len; i++) {
//		if (input[i] == '"') {
//			return true;
//		}
//	}
//	return false;
//}
////int main() {
//	char input[400];
//	char storage[400][400];
//	char separators[400][400];
//	int wordcount = 0;
//	int storagecount = 0;
//	int storageIndex = 0;
//	int separatorcount = 0;
//	int separatorIndex = 0;
//	cin.getline(input, 400);
//	size_t len = strlen(input);
//	while (!wheter_double_quotes(input)) {
//		for (int i = 0; i < len; i++) {
//			if (input[i] == ' '&&input[i] <= 'a' && input[i] >= 'z' && input[i] <= 'A' && input[i] >= 'Z' && input[i + 1] != ' ' && input[i] != 39 && input[i] != 45 && input[i] >= 48 && input[i] <= 57) {
//				storagecount++;
//				separators[separatorcount][separatorIndex] = input[i];
//				separatorIndex++;
//			}
//			else if (input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z' || input[i] >= 48 && input[i] <= 57 || input[i] == 39 || input[i] == 45) {
//				storage[storagecount][storageIndex] = input[i];
//				storageIndex++;
//			}
//			else if (input[i] == '.' && input[i + 1] == '.' && input[i + 2] == '.') {
//
//				separators[separatorcount][0] = input[i];
//				separatorcount++;
//			}
//		

