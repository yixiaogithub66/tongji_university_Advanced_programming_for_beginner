//#include <iostream>
//#include <iomanip>
//#define ARRAY_MAX_LENGTH 200
//using namespace std;
//
///****************** TODO ******************/
//void strip_space(char expression[]) {
//    int j = 0;
//    for (int i = 0; expression[i] != '\0'; ++i) {
//        if (expression[i] != ' ') {
//            expression[j++] = expression[i];
//        }
//    }
//    expression[j] = '\0';
//}
//
//long double calculate(char oper,long double a,long double b) {
//    switch (oper) {
//    case '+':
//		a += b;
//        return a;
//        break;
//    case '-':
//		a -= b;
//		return a;
//        break;
//    case '*':
//		a *= b;
//		return a;
//        break;
//    case '/':
//        if (b == 0) {
//            cout << "��������Ϊ��" << endl;
//            exit(0);
//        }
//		a /= b;
//		return a;
//        break;
//    }
//    return b;
//}
///**************** TODO-END ****************/
//
//int main()
//{
//    char expression[ARRAY_MAX_LENGTH] = {};
//
//    cout << fixed << setprecision(6);
//    cin.getline(expression, ARRAY_MAX_LENGTH);
//    strip_space(expression);  // ɾ�����ʽ�еĿո�
//
//    double answer = 0;
//    int operand = 0;    // ������
//    char oper = '\0';   // �����
//    for (int i = 0; expression[i] != '\0'; ++i)
//    {
//        if (expression[i] >= '0' && expression[i] <= '9')
//        {
//            // ��������֣����������ȡ
//            operand *= 10;
//            operand += expression[i] - '0';
//        }
//        else
//        {
//            // ���������������������ǰ��ı��ʽ
//            answer = calculate(oper, answer, operand);
//            operand = 0;
//            oper = expression[i];
//
//            cout << answer << endl;
//        }
//        // ����涨�޷Ƿ��ַ��Ͳ��Ϲ�����
//    }
//
//    // �������һ�����ʽ
//    answer = calculate(oper, answer, operand);
//    cout << answer << endl;
//
//    return 0;
//}