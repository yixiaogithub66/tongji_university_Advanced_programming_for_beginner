//#include <iostream>
//using namespace std;
//int main() {
//	int matrix[8][8] = { 0 };
//	int final_matrix[4][4] = { 0 };
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			cin >> matrix[i][j];
//		}
//	}
//	for (int i = 0; i < 8; i += 2) {
//		for (int j = 0; j < 8; j += 2) {
//			// 找到 2x2 区域的最大值
//			int max_value = matrix[i][j];
//			max_value = max(max_value, matrix[i][j + 1]);
//			max_value = max(max_value, matrix[i + 1][j]);
//			max_value = max(max_value, matrix[i + 1][j + 1]);
//			final_matrix[i / 2][j / 2] = max_value;
//		}
//	}
//	cout << "进行2*2最大池化后的结果为：" << endl;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << final_matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}