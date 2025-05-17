//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int grid[9][9] = { 0 };
//    bool isLightSource[9][9] = { false };
//
//    cout << "请输入光源的位置(x, y)以及光源的强度（以 -1 结束输入）：\n";
//    int x, y, intensity;
//
//    while (true) {
//        cin >> x;
//        if (x == -1) break;
//        cin >> y >> intensity;
//
//        isLightSource[x][y] = true;
//
//        for (int i = 0; i < 9; i++) {
//            for (int j = 0; j < 9; j++) {
//                int distance = abs(x - i) + abs(y - j);
//                int lightLevel = intensity - distance;
//                if (lightLevel > 0) {
//                    if (lightLevel > grid[i][j]) {
//                        grid[i][j] = lightLevel;
//                    }
//                }
//            }
//        }
//    }
//
//    cout << "最终的光照等级矩阵为：\n";
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            if (isLightSource[i][j]) {
//                cout << "* ";
//            }
//            else {
//                cout << grid[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
