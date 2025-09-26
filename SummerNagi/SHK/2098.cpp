//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//#define INF 12345678
//
//using namespace std;
//
//// dp[c][v] ���� ���ð� c, ������� �湮�� ��� ���� ����Ʈ�� v�� �� ������ ���� ��� ���ø� �����ϴµ� �ʿ��� �ּҺ��
//
//int N;
//int dp[16][1 << 16];
//int W[16][16];
//
//
//
//int tsp(int c, int v)
//{
//	// ��� ���ø� �湮���� ��
//	if (v == (1 << N) - 1)
//	{
//		return W[c][0] == 0 ? INF : W[c][0];
//	}
//	// �޸������̼�
//	if (dp[c][v] != 0)
//	{
//		return dp[c][v];
//	}
//
//	int result = INF;
//
//	for (int i = 0; i < N; i++)
//	{
//		if ((v & 1 << i) == 0 && W[c][i] != 0)
//		{
//			result = min(result, tsp(i, (v | 1 << i)) + W[c][i]);
//		}
//	}
//
//	dp[c][v] = result;
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
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> W[i][j];
//		}
//	}
//
//	cout << tsp(0, 1) << endl;
//}