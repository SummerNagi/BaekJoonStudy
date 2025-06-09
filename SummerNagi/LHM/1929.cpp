//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int m, n;
//	cin >> m >> n;
//	vector<int> arr(n + 1);
//
//	for (int i = 2; i <= n; ++i)
//	{
//		arr[i] = i;
//	}
//
//	// n의 제곱근까지만
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (arr[i] == 0) continue;
//
//		// 소수의 배수 값을 n까지 반복
//		for (int j = i + i; j <= n; j = j + i)
//		{
//			// 배수 지우기
//			arr[j] = 0;
//		}
//	}
//
//	for (int i = m; i <= n; ++i)
//	{
//		if(arr[i] != 0) cout << arr[i] << "\n";
//	}
//}