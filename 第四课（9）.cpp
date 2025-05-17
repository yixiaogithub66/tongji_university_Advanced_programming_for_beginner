//#include <iostream>
//using namespace std;
//bool shifouzhishu(int n) {
//	if (n == 2) return true;
//	if (n == 1 || n % 2 == 0) return false;
//	for (int i = 3; i <= sqrt(n); i++) { 
//		if (n % i == 0) 
//			return false;
//	}
//	return true;
//}
//int main() {
//	cout << "请输入你想要寻找质数的区间的两个数: " << endl;
//	int a, b;
//	cin >> a >> b;
//	cout << "区间中的质数有:" << endl; 
//	for (int i = a; i <= b; i++) {
//		if (shifouzhishu(i)) {
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//	return 0;
//}