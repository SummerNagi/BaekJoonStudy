//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	vector<int> coins(n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> coins[i];
//	}
//
//	int count = 0;
//	for (int i = n - 1; i >= 0; --i)
//	{
//		int current = coins[i];
//		// 현재 동전으로 K를 나눌 수 있다면
//		if (k >= current)
//		{
//			// 최대한 많은 개수 사용
//			count += k / current; // 몫 더함
//			k %= current; // 나머지 K 업데이트
//		}
//
//		// K가 0이 되면 탈출
//		if(k == 0) break;
//	}
//
//	cout << count;
//
//	return 0;
//}