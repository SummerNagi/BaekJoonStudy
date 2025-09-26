//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#define mod 1000000007
//
//using namespace std;
//
//
//
//unsigned long long dp[101][101][101] = { 0 };
//
//int main()
//{
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, L, R;
//	cin >> N >> L >> R;
//
//	// ���� ū �ǹ��� �������� ����
//	dp[1][1][1] = 1;
//
//
//	for (int n = 2; n <= N; n++)
//	{
//		for (int l = 1; l <= L; l++)
//		{
//			for (int r = 1; r <= R; r++)
//			{
//				// ������ �ִ� �������� ���� ���� �� ���� ū ������ ��ġ�ϴ� ����� ��
//				// ���� ���ʿ� ���� ���, ���� �����ʿ� ���� ���, �߰� ��� �ƹ� ������ ���� ���
//				dp[n][l][r] = dp[n - 1][l - 1][r] + dp[n - 1][l][r - 1] + dp[n - 1][l][r] * (n - 2);
//				dp[n][l][r] %= mod;
//			}
//		}
//	}
//
//	cout << dp[N][L][R];
//}