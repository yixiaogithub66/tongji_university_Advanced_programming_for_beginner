//#include <iostream>
//// ʵ���ϣ�����ʹ��ö�ٻ��ʹ�ú궨�����
//#define INFO_MESSAGE 0
//#define WARNING_MESSAGE 1
//#define ERROR_MESSAGE 2
//using namespace std;
//
///****************** TODO ******************/
//void message(const string& content, int type = INFO_MESSAGE) {
//    if (type == WARNING_MESSAGE) {
//        cout << "���棺" << content << endl;
//    }
//    else if (type == ERROR_MESSAGE) {
//        cout << "����" << content << endl;
//    }
//    else {
//        cout << content << endl;
//    }
//}
///**************** TODO-END ****************/
//
//// ������һ��ʹ��������д�������������������Խ��弶�Ƽ���ת��Ϊ�ٷ��Ƽ���
//int main()
//{
//    double grade;
//
//    message("�������弶�Ƽ��㣺");
//    cin >> grade;
//
//    if (cin.fail())
//    {
//        message("�������������벻�����֣�", ERROR_MESSAGE);
//        return 0;
//    }
//
//    if (grade < 0 || grade > 5)
//    {
//        message("���������ܲ����Ϲ淶�����弶�Ƽ���ȡֵһ����0-5��", WARNING_MESSAGE);
//    }
//
//    message("ת���ɹ����ٷ��Ƽ����ǣ�", INFO_MESSAGE);
//    // ˼��������������д����Ϊ message(grade * 10 + 45); ����ĳ���Ӧ������޸ģ�
//    cout << grade * 10 + 45 << endl;
//
//    return 0;
//}