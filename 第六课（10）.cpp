//#include <iostream>  
//#include <cmath>  
//using namespace std;  
//
//int main() {  
//    short matrix[5][5] = { 0 };
//
//   cout << "������ 3x3 ����� 9 ���������Կո���зָ�����\n";  
//   for (int i = 0; i < 5; i += 2)  
//   {  
//       for (int j = 0; j < 5; j += 2)  
//       {  
//           cin >> matrix[i][j];  
//       }  
//   }  
//
//   for (int i = 0; i < 5; i += 2)  
//   {  
//       for (int j = 1; j < 5; j += 2)  
//       {  
//           matrix[i][j] = (matrix[i][j - 1] + matrix[i][j + 1]) / 2;  
//       }  
//   }  
//   for (int j = 0; j < 5; j += 2)  
//   {  
//       for (int i = 1; i < 5; i += 2)  
//       {  
//           matrix[i][j] = (matrix[i - 1][j] + matrix[i + 1][j]) / 2;  
//       }  
//   }  
//   for (int i = 1; i < 5; i += 2)  
//   {  
//       for (int j = 1; j < 5; j += 2)  
//       {  
//           matrix[i][j] = (matrix[i - 1][j - 1] + matrix[i + 1][j + 1] + matrix[i + 1][j - 1] + matrix[i - 1][j + 1]) / 4;  
//       }  
//   }  
//   cout << "���м򵥲�ֵ��Ľ��Ϊ��" << endl;  
//   for (int i = 0; i < 5; i++)  
//   {  
//       for (int j = 0; j < 5; j++)  
//       {  
//           cout << matrix[i][j] << " ";  
//       }  
//       cout << endl;  
//   }  
//
//   return 0;  
//}
