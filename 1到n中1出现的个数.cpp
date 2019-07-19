//#include <bit.h>
//using namespace std;
//
////https://blog.csdn/yi_Afly/article/details/52012593
////可以推广至 0 ~9 任意数出现的个数
////时间复杂度 logN
//int num(int n, int a)
//{
//	int count = 0;
//	int base = 1;		//权值
//	int round = n;
//	while (round > 0){
//		int weight = round % 10;		
//		round /= 10;
//		count += round*base;		//
//		if (weight == a){
//			count += (n%base) + 1;  //看weight的后边的数
//		}
//		else if (weight > a){
//			count += base;			//在该位直接出现base次
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