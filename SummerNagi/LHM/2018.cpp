//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 1;
//	int start = 1;
//	int end = 1;
//	int sum = 1;
//
//	while (end != n)
//	{
//		// 연속된 수의 합이 n과 같을 때
//		if (sum == n)
//		{
//			count++;
//			end++;
//			sum = sum + end;
//		}
//		// 연속된 수의 합이 n보다 클 때
//		else if (sum > n)
//		{
//			sum = sum - start;
//			start++;
//		}
//		// 연속된 수의 합이 n보다 작을 때
//		else
//		{
//			end++;
//			sum = sum + end;
//		}
//	}
//
//	cout << count << endl;
//
//	return 0;
//}