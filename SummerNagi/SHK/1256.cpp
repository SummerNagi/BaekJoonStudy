//#include <iostream>
//
//using namespace std;
//
//long dp[201][201];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M, K;
//	cin >> N >> M >> K;
//
//	for (int i = 0; i <= N + M; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				dp[i][j] = 1;
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//
//				if (dp[i][j] > 1000000000)
//				{
//					dp[i][j] = 1000000000;
//				}
//			}
//
//		}
//	}
//	if (dp[N + M][M] < K)
//	{
//		cout << "-1";
//	}
//	else
//	{
//		while (N != 0 || M != 0)
//		{
//			// i��°�� a�� ������� ��
//			// �ڿ� �ڸ������� ���� �� �ִ� ���ڿ��� �������� k�� �������
//			if (K <= dp[N + M - 1][M])
//			{
//				cout << 'a';
//				N--;
//			}
//			// ���� ���ڿ��� ������ ���ٸ� z�� �����
//			else
//			{
//				cout << 'z';
//				K -= dp[N + M - 1][M];
//				M--;
//			}
//		}
//	}
//
//}