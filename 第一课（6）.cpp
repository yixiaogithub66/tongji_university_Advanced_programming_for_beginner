#include <iostream>
using namespace std;
int input_distance() {
    int d;
    cout << "请输入三体人到我们这的距离：" << endl;
    cin >> d;
    return d;
}
double calculate_time(int d) {
    double time = d / 0.01;
    return time;
}
void print(double time) {
    cout << "三体人需要" << time << "年到达地球。" << endl;
}
/*int main() {
    int distance = input_distance();
    double time = calculate_time(distance);
    print(time);
    return 0;
}*/