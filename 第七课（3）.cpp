//#include <iostream>
//using namespace std;
//int main() {
//	char input_1[201];
//	cin.getline(input_1, 201);
//	char input_2[201];
//	cin.getline(input_2, 201);
//	for (int i =0;input_1[i]!=0;i++){
//		for (int j = 0; input_2[j] != 0; j++) {
//			if (input_1[i] == input_2[j]) {
//				input_1[i] = ' ';
//				break;
//			}
//		}
//	}
//	bool is_empty = true;
//	for (int i = 0; input_1[i] != 0; i++) {
//		if (input_1[i] != ' ') {
//			is_empty = false;
//			break;
//		}
//	}
//	if (is_empty) {
//		cout << "¿Õ´®" << endl;
//	}
//	else {
//		for (int i = 0; input_1[i] != 0; i++) {
//			if (input_1[i] != ' ') {
//				cout << input_1[i];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}