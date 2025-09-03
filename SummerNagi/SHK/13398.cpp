//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	vector<int> v(N);
//	vector<int> S(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> v[i];
//
//		if (i != 0)
//		{
//			S[i] = S[i - 1] + v[i];
//
//		}
//		else
//		{
//			S[i] = v[i];
//		}
//	}
//
//	// i��°������ �ִ� ���� �հ� ������ ���� �ε���
//	vector<int> dp(N);
//	// ������ ���� ������ �ش� ������ ������ ���� ���� ��� �׸��� ���� �ִ밪�� ��
//
//	int removed = -1;
//	int lastNeg = -1;
//	dp[0] = v[0];
//
//	for (int i = 1; i < N; i++)
//	{
//		if (v[i] < 0)
//		{
//			lastNeg = i;
//
//			if (removed != -1)
//			{
//				int temp = S[i] - S[removed] - v[i];
//
//				dp[i] = max(dp[i - 1], temp);
//
//				removed = dp[i] > temp ? removed : i;
//			}
//			else
//			{
//				removed = i;
//
//				dp[i] = S[i] - v[i];
//			}
//		}
//		else
//		{
//			// ���������� ���� ������ ������ ���� �κ���
//			int temp = -1001;
//
//			if (removed != -1 && removed != lastNeg)
//			{
//				temp = S[i] - v[lastNeg];
//
//				// lastNeg�� ������ ���� �κ����� dp[i-1]�� v[i](���� ��)�� ���� �ͺ��� ũ�ٸ� lastNeg�� removed�� ����
//				removed = dp[i - 1] > temp ? removed : lastNeg;
//
//				dp[i] = max(dp[i - 1], temp);
//			}
//			else
//			{
//				dp[i] = max(dp[i - 1] + v[i], v[i]);
//			}
//		}
//	}
//
//	cout << *max_element(dp.begin(), dp.end());
//}
//
