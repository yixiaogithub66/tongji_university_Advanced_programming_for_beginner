//#include <iostream>
//using namespace std;
//
//int main() {
//    int parking_lot[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
//    int car_positions[15] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 }; 
//    cout << "请输入车辆编号和停车位编号（以 -1 结束）：" << endl;
//
//    while (true) {
//        int car, spot;
//        cin >> car >> spot;
//
//        if (car == -1) {
//            break; 
//        }
//
//        if (car_positions[car] != -1) {
//            cout << "该车已经停在" << car_positions[car] << "号车位了！" << endl;
//        }
//        else if (parking_lot[spot] != -1) {
//            cout << parking_lot[spot] << "号车已经占据该车位了！" << endl;
//        }
//        else {
//            parking_lot[spot] = car; 
//            car_positions[car] = spot; 
//            cout << car << "号车成功停靠在" << spot << "号车位！" << endl;
//        }
//    }
//
//    return 0;
//}






	