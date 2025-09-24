//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int dp[31][31];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int Q;
//	cin >> Q;
//
//	for (int i = 0; i <= 30; i++)
//	{
//		dp[i][i] = 1;
//		dp[i][0] = 1;
//		dp[i][1] = i;
//	}
//
//	while (Q--)
//	{
//		int N, M;
//		cin >> N >> M;
//
//		// 동쪽에서 N개 뽑아서 차례로 연결하는 경우의 수
//		for (int i = 1; i <= M; i++)
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
//			}
//		}
//
//		cout << dp[M][N] << "\n";
//	}
//}