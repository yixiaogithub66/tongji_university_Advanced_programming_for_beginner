//#include <iostream>
//using namespace std;
//
//int balance = 100;
//
///****************** TODO ******************/
//void save_money(int money)
//{
//	balance += money;
//	cout << "��Ǯ�ɹ�" << endl;
//	cout << "��ǰ���Ϊ" << balance << "Ԫ��" << endl;
//}
//void retrieve_money(int money)
//{
//	if (balance >= money) {
//		balance -= money;
//		cout << "ȡǮ�ɹ�" << endl;
//		cout << "��ǰ���Ϊ" << balance << "Ԫ��" << endl;
//	}
//	else {
//		cout << "����" << endl;
//		cout << "��ǰ���Ϊ" << balance << "Ԫ��" << endl;
//	}
//}
//void print_balance()
//{
//	cout << "��ǰ���Ϊ" << balance << "Ԫ��" << endl;
//}
///**************** TODO-END ****************/
//
//void atm_manager(int money)
//{
//    if (money > 0) {
//        save_money(money);
//    }
//    else if (money < 0) {
//        retrieve_money(-money);
//    }
//    print_balance();
//}
//
//int main()
//{
//    int query;
//
//    cin >> query;
//    while (query != 0)
//    {
//        atm_manager(query);
//        cin >> query;
//    }
//
//    return 0;
//}