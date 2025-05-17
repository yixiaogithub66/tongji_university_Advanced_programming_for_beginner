//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//   string a, b;
//   cin >> a >> b;
//   size_t n = a.length();
//   size_t m = b.length();
//   if (n < m) {
//       a = string(m - n, '0') + a;
//   }
//   else {
//       b = string(n - m, '0') + b;
//   }
//   string result = "";
//   int carry = 0;
//   for (int i = static_cast<int>(max(n, m)) - 1; i >= 0; i--) { 
//       int sum = (a[i] - '0') + (b[i] - '0') + carry;
//       carry = sum / 10;
//       result += (sum % 10) + '0';
//   }
//   if (carry > 0) {
//       result += carry + '0';
//   }
//   for (size_t i = 0, j = result.length() - 1; i < j; i++, j--) {
//       char temp = result[i];
//       result[i] = result[j];
//       result[j] = temp;
//   }
//   cout << result << endl;
//   return 0;
//}
