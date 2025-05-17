//#include <iostream>
//#include <iomanip>
//#define SAMPLE_LENGTH 10
//#define DATA_NUM 4
//#define PARAMS_NUM 4
//#define MAX_ITERATION 128
//using namespace std;
//
///****************** TODO ******************/
//double mean_square_error(int data[SAMPLE_LENGTH][DATA_NUM], double params[PARAMS_NUM])
//{
//    double loss = 0;
//	for (int i = 0; i < SAMPLE_LENGTH; ++i)
//	{
//		double y = data[i][DATA_NUM - 1];
//		double y_hat = params[0] * data[i][0] + params[1] * data[i][1] + params[2] * data[i][2] + params[3];
//		loss += (y - y_hat) * (y - y_hat);
//	}
//	loss /= SAMPLE_LENGTH;
//	return loss;
//}
//void update_params(int data[SAMPLE_LENGTH][DATA_NUM], double params[PARAMS_NUM])
//{
//	double gradients[PARAMS_NUM] = {};
//	for (int i = 0; i < SAMPLE_LENGTH; ++i)
//	{
//		double y = data[i][DATA_NUM - 1];
//		double y_hat = params[0] * data[i][0] + params[1] * data[i][1] + params[2] * data[i][2] + params[3];
//		for (int j = 0; j < PARAMS_NUM - 1; ++j)
//		{
//			gradients[j] += -2 * (y - y_hat) * data[i][j];
//		}
//		gradients[PARAMS_NUM - 1] += -2 * (y - y_hat);
//	}
//	for (int j = 0; j < PARAMS_NUM; ++j)
//	{
//		params[j] -= 0.01 * gradients[j] / SAMPLE_LENGTH;
//	}
//}
//
///**************** TODO-END ****************/
//
//int main()
//{
//    int data[SAMPLE_LENGTH][DATA_NUM] = {};
//
//    // ����ѵ������
//    for (int i = 0; i < SAMPLE_LENGTH; ++i)
//    {
//        for (int j = 0; j < DATA_NUM; ++j)
//        {
//            cin >> data[i][j];
//        }
//    }
//
//    // 1. ������ʼ��
//    double params[PARAMS_NUM] = {};
//    // �ĸ�������ʼ��Ϊ�㣬��ǰ����ֱ���w1,w2,w3,b
//
//    // ���е���
//    double loss = 0;
//    cout << "Start Iteration!" << endl;
//    cout << fixed << setprecision(6);
//    for (int i = 0; i < MAX_ITERATION; ++i)
//    {
//        // 2. ʹ�õ�ǰ���������ݣ�������ʧ����
//        loss = mean_square_error(data, params);
//        // i �̶���λ��������loss �̶���λС��λ�����
//        cout << "iter: " << setw(3) << i << ", loss: ";
//        cout << loss << endl;
//
//        // 3. �����ݶȣ�ʹ���ݶ��½��ķ������²���
//        update_params(data, params);
//    }
//    cout << "Iteration Finished!" << endl;
//
//    // ����ع��Ĳ���ֵ��
//    cout << "params:" << endl;
//    for (int i = 0; i < PARAMS_NUM; ++i)
//    {
//        cout << params[i] << endl;
//    }
//
//    return 0;
//}