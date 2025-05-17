//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int grid[9][9] = { 0 };
//    bool isLightSource[9][9] = { false };
//
//    cout << "�������Դ��λ��(x, y)�Լ���Դ��ǿ�ȣ��� -1 �������룩��\n";
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
//    cout << "���յĹ��յȼ�����Ϊ��\n";
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
