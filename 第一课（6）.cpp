#include <iostream>
using namespace std;
int input_distance() {
    int d;
    cout << "�����������˵�������ľ��룺" << endl;
    cin >> d;
    return d;
}
double calculate_time(int d) {
    double time = d / 0.01;
    return time;
}
void print(double time) {
    cout << "��������Ҫ" << time << "�굽�����" << endl;
}
/*int main() {
    int distance = input_distance();
    double time = calculate_time(distance);
    print(time);
    return 0;
}*/