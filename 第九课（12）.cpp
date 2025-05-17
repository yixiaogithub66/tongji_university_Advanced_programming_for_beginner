//#include <iostream>
//using namespace std;
//
//// �������ƶ�
//double cosine_similarity(double a[], double b[], int n);
//// ���������ŷ�����/������/������
//double distance(double a[], double b[], int n, const char type[] = "Euclidean");
//double distance(char a[], char b[], const char type[]);
//// �ܿ�������ϵ��
//double jaccard_similarity_coefficient(char a[], char b[]);
//
//int main()
//{
//    // 1. �������ƶ�
//
//    // ���ݸ�ʽ��������ά����
//    {
//        double a[3] = {};
//        double b[3] = {};
//        cout << "------------------------------------------" << endl;
//        cout << "             Cosine Similarity            " << endl;
//        cout << "------------------------------------------" << endl;
//        cout << "Please input the first vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> a[i];
//        }
//        cout << "Please input the second vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> b[i];
//        }
//        cout << "The cosine similarity is: " << cosine_similarity(a, b, 3) << endl;
//    }
//
//    // 2. ŷ����þ���
//
//    // ���ݸ�ʽ��������ά����
//    {
//        double a[3] = {};
//        double b[3] = {};
//        cout << "------------------------------------------" << endl;
//        cout << "           Euclidean Distance             " << endl;
//        cout << "------------------------------------------" << endl;
//        cout << "Please input the first vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> a[i];
//        }
//        cout << "Please input the second vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> b[i];
//        }
//        cout << "The euclidean distance is: " << distance(a, b, 3) << endl;
//        // cout << "The euclidean distance is: " << distance(a, b, 3, "Euclidean") << endl;
//    }
//
//    // 3. �����پ���
//
//    // ���ݸ�ʽ��������ά����
//    {
//        double a[3] = {};
//        double b[3] = {};
//        cout << "------------------------------------------" << endl;
//        cout << "           Manhattan Distance             " << endl;
//        cout << "------------------------------------------" << endl;
//        cout << "Please input the first vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> a[i];
//        }
//        cout << "Please input the second vector: " << endl;
//        for (int i = 0; i < 3; i++)
//        {
//            cin >> b[i];
//        }
//        cout << "The manhattan distance is: " << distance(a, b, 3, "Manhattan") << endl;
//    }
//
//    // 4. ��������
//
//    // ���ݸ�ʽ�������ַ���
//    {
//        char a[100] = {};
//        char b[100] = {};
//        cout << "------------------------------------------" << endl;
//        cout << "            Hamming Distance              " << endl;
//        cout << "------------------------------------------" << endl;
//        cout << "Please input the first string: " << endl;
//        cin.get(); // ��ȡ���з���cin.getline()֮ǰ��Ҫ�ȶ�ȡ���з��������ֱ�Ӷ�ȡ���з��������������
//        cin.getline(a, 100);
//        cout << "Please input the second string: " << endl;
//        cin.getline(b, 100);
//        cout << "The hamming distance is: " << distance(a, b, "Hamming") << endl;
//    }
//
//    // 5. �ܿ�������ϵ��
//
//    // ���ݸ�ʽ������Сд��ĸ���ϣ��ǿգ����Ѿ������ֵ����ź���
//    {
//        char a[100] = {};
//        char b[100] = {};
//        cout << "------------------------------------------" << endl;
//        cout << "       Jaccard Similarity Coefficient     " << endl;
//        cout << "------------------------------------------" << endl;
//        cout << "Please input the first set: " << endl;
//        cin >> a;
//        cout << "Please input the second set: " << endl;
//        cin >> b;
//        cout << "The jaccard similarity coefficient is: " << jaccard_similarity_coefficient(a, b) << endl;
//    }
//
//    return 0;
//}
//
///****************** TODO ******************/
//double cosine_similarity(double a[], double b[], int n)
//{
//	double dot_product = 0.0;
//	double norm_a = 0.0;
//	double norm_b = 0.0;
//	for (size_t i = 0; i < n; i++)
//	{
//		dot_product += a[i] * b[i];
//		norm_a += a[i] * a[i];
//		norm_b += b[i] * b[i];
//	}
//	return dot_product / (sqrt(norm_a) * sqrt(norm_b));
//}
//double distance(double a[], double b[], int n, const char type[])
//{
//	double dist = 0.0;
//	if (type == "Euclidean")
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			dist += (a[i] - b[i]) * (a[i] - b[i]);
//		}
//		return sqrt(dist);
//	}
//	else if (type == "Manhattan")
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			dist += abs(a[i] - b[i]);
//		}
//		return dist;
//	}
//	else
//	{
//		cout << "Invalid distance type!" << endl;
//		return -1;
//	}
//}
//double distance(char a[], char b[], const char type[])
//{
//	size_t len_a = strlen(a);
//	size_t len_b = strlen(b);
//	if (type == "Hamming")
//	{
//		if (len_a != len_b)
//		{
//			cout << "Strings must be of the same length!" << endl;
//			return -1;
//		}
//		int dist = 0;
//		for (int i = 0; i < len_a; i++)
//		{
//			if (a[i] != b[i])
//			{
//				dist++;
//			}
//		}
//		return dist;
//	}
//	else
//	{
//		cout << "Invalid distance type!" << endl;
//		return -1;
//	}
//}
//double jaccard_similarity_coefficient(char a[], char b[])
//{
//	size_t len_a = strlen(a);
//	size_t len_b = strlen(b);
//	int intersection = 0;
//	size_t union_set = 0;
//	for (int i = 0; i < len_a; i++)
//	{
//		for (int j = 0; j < len_b; j++)
//		{
//			if (a[i] == b[j])
//			{
//				intersection++;
//				break;
//			}
//		}
//	}
//    union_set = len_a + len_b - intersection;
//	return (double)intersection / union_set;
//}
///**************** TODO-END ****************/