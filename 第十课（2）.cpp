//#include <iostream>
//using namespace std;
//
//void atm(int money)
//{
//    /****************** TODO ******************/
//    static int formal_query = 100;  // ʹ�� static ȷ������ڶ�ε����б���һ��
//    if (money > 0) {
//        formal_query += money;
//        cout << "��Ǯ�ɹ�" << endl;
//        cout << "��ǰ���Ϊ" << formal_query << "Ԫ��" << endl;
//    }
//    else if (money < 0) {
//        if (formal_query + money < 0) {
//            cout << "����" << endl;
//            cout << "��ǰ���Ϊ" << formal_query << "Ԫ��" << endl;
//        }
//        else {
//            formal_query += money;
//            cout << "ȡǮ�ɹ�" << endl;
//            cout << "��ǰ���Ϊ" << formal_query << "Ԫ��" << endl;
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