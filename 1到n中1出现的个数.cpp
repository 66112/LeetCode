//#include <bit.h>
//using namespace std;
//
////https://blog.csdn/yi_Afly/article/details/52012593
////�����ƹ��� 0 ~9 ���������ֵĸ���
////ʱ�临�Ӷ� logN
//int num(int n, int a)
//{
//	int count = 0;
//	int base = 1;		//Ȩֵ
//	int round = n;
//	while (round > 0){
//		int weight = round % 10;		
//		round /= 10;
//		count += round*base;		//
//		if (weight == a){
//			count += (n%base) + 1;  //��weight�ĺ�ߵ���
//		}
//		else if (weight > a){
//			count += base;			//�ڸ�λֱ�ӳ���base��
//		}
//		base *= 10;
//	}
//	return count;
//}
//int main()
//{
//	cout << num(55,1) << endl;
//	return 0;
//}