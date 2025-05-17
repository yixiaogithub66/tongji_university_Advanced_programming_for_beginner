//#include <iostream>
//using namespace std;
//
//void atm(int money)
//{
//    /****************** TODO ******************/
//    static int formal_query = 100;  // 使用 static 确保余额在多次调用中保持一致
//    if (money > 0) {
//        formal_query += money;
//        cout << "存钱成功" << endl;
//        cout << "当前余额为" << formal_query << "元。" << endl;
//    }
//    else if (money < 0) {
//        if (formal_query + money < 0) {
//            cout << "余额不足" << endl;
//            cout << "当前余额为" << formal_query << "元。" << endl;
//        }
//        else {
//            formal_query += money;
//            cout << "取钱成功" << endl;
//            cout << "当前余额为" << formal_query << "元。" << endl;
//        }
//    }
//    /**************** TODO-END ****************/
//}
//
//int main()
//{
//    int query;
//
//    cin >> query;
//    while (query != 0)
//    {
//        atm(query);
//        cin >> query;
//    }
//
//    return 0;
//}