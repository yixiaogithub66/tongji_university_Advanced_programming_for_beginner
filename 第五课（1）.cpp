//#include <iostream>
//using namespace std;
//int main()
//{
//	const char* s[] = {
//	"张三", "李四", "王二",
//	"麻子", "唐僧", "悟空",
//	"八戒", "沙僧", "金角大王",
//	"银角大王", "红孩儿", "白骨精" };
//	int k = 5;
//	char c = 'C';
//	do {
//		switch (c++) {
//		case 'A':
//			k %= 8;
//			break;
//		case 'B':
//			c = 'G';
//			k *= 9;
//
//		case 'C':
//			k = k / 4 - 1;
//			break;
//		case 'D':
//			k = k * 2;
//			continue;
//		case 'E':
//			k = k * 4 + 1;
//			break;
//		case 'F':
//			c -= 6;
//			break;
//		default:
//			k = k + 3;
//		}
//		k++;
//		// 下面这行代码会输出数组s中的第k个元素。
//		// 注意，数组元素从零开始编号，比如s[0]="张三"。
//		cout << s[k];
//		cout << c << endl;
//		cout << k << endl;
//	} while (c < 'G');
//	cout << endl;
//	return 0;
//}