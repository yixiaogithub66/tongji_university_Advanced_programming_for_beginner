//#include <iostream>  
//using namespace std;
//#define N 9  
//int grid[N][N] = { 0 };
//int path[N * N][2]; 
//int pathIndex = 0;
//
//bool findPath(int x, int y) {
//    if (x == 0 || x == N - 1 || y == 0 || y == N - 1) {
//        path[pathIndex][0] = x; 
//        path[pathIndex][1] = y; 
//        pathIndex++;
//        return true;
//    }
//    grid[x][y] = 0;
//    int dx[] = { -1, 1, 0, 0 };
//    int dy[] = { 0, 0, -1, 1 };
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && nx < N && ny >= 0 && ny < N && grid[nx][ny] == 1) {
//            if (findPath(nx, ny)) {
//                path[pathIndex][0] = x; 
//                path[pathIndex][1] = y; 
//                pathIndex++;
//                return true;
//            }
//        }
//    }
//    grid[x][y] = 1;
//    return false;
//}
//
//int main() {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> grid[i][j];
//        }
//    }
//    int startX, startY;
//    cin >> startX >> startY;
//    if (findPath(startX, startY)) {
//        for (int i = pathIndex - 1; i >= 0; i--) {
//            cout << path[i][0] << "," << path[i][1] << endl;
//        }
//    }
//    return 0;
//}

