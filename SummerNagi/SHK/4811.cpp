//#include <iostream>
//#include <vector>
//#include <map>
//#include <cmath>
//#include <algorithm>
//
//#define ull unsigned long long
//
//int answer = 0;
//
//using namespace std;
//
//ull dp[31][31];
//
//ull solve(int w, int h)
//{
//	if (w == 0)
//	{
//		return 1;
//	}
//
//	if (dp[w][h] != -1)
//	{
//		return dp[w][h];
//	}
//
//	long long result = 0;
//
//	// 온전한거 꺼내는 경우
//	if (w > 0)
//	{
//		result += solve(w - 1, h + 1);
//	}
//
//	// 반개짜리 꺼내는 경우
//	if (h > 0)
//	{
//		result += solve(w, h - 1);
//	}
//
//	dp[w][h] = result;
//
//	return result;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	while (1)
//	{
//		int N;
//		cin >> N;
//
//		if (N == 0)
//		{
//			break;
//		}
//
//		for (int i = 0; i <= 30; i++)
//		{
//			for (int j = 0; j <= 30; j++)
//			{
//				dp[i][j] = -1;
//			}
//		}
//
//		cout << solve(N, 0) << endl;
//
//	}
//}