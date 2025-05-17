//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    cout << "请输入你需要计算绩点的功课数: " << endl;
//    int N;
//    cin >> N;
//
//    float zongxuefen = 0;
//    float zongjidian = 0;
//
//    for (int i = 0; i < N; ++i) {
//        float xuefen;
//        int jidian;
//        cout << "请输入第" << i + 1 << "门功课的学分和绩点: " << endl;
//        cin >> xuefen >> jidian;
//
//        zongxuefen += xuefen;
//        zongjidian += xuefen * jidian;
//
//        float pingjunjidian = zongjidian / zongxuefen;
//        cout << "当前平均绩点为: " << setiosflags(ios::fixed) << setprecision(2) << pingjunjidian << "。" << endl;
//    }
//
//    return 0;
//}
