//#include <iostream>
//using namespace std;
//int main() {
//    int Flip_Game[3][3] = { 0 };
//    int i, j;
//    int n = 2;
//    int m = 2;
//    int x, y;
//    cout << "请输入要翻转的坐标（x,y）" << endl;
//
//    while (true) {
//        cin >> x;
//        if (x == -1) {
//            break;
//        }
//		cin >> y;
//        if (x < 0 || x > n || y < 0 || y > m) {
//            cout << "坐标不合法" << endl;
//            continue; 
//        }
//        if (x == -1) {
//            break; 
//        }
//        Flip_Game[x][y] = 1 - Flip_Game[x][y];
//        if (x - 1 >= 0) {
//            Flip_Game[x - 1][y] = 1 - Flip_Game[x - 1][y];
//        }
//        if (x + 1 <= n) {
//            Flip_Game[x + 1][y] = 1 - Flip_Game[x + 1][y];
//        }
//        if (y - 1 >= 0) {
//            Flip_Game[x][y - 1] = 1 - Flip_Game[x][y - 1];
//        }
//        if (y + 1 <= m) {
//            Flip_Game[x][y + 1] = 1 - Flip_Game[x][y + 1];
//        }
//       
//    }
//
//	for (i = 0; i <= n; i++) {
//            for (j = 0; j <= m; j++) {
//                cout << Flip_Game[i][j] << " ";
//            }
//            cout << endl;
//        }
//    return 0;
//}
