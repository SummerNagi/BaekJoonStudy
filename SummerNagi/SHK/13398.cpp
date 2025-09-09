<<<<<<< Updated upstream
=======
<<<<<<< HEAD
// #include <iostream>
// #include <vector>
// #include <algorithm>
// 
// using namespace std;
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N;
// 	cin >> N;
// 
// 	vector<int> v(N);
// 	vector<int> negIdx;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		cin >> v[i];
// 
// 		if (v[i] < 0)
// 		{
// 			negIdx.push_back(i);
// 		}
// 
// 	}
// 
// 	// i��°������ �ִ� ���� �հ� ������ ���� �ε���
// 	vector<int> dp(N);
// 	vector<int> left_dp(N);
// 
// 	dp[0] = v[0];
// 	left_dp[0] = v[0];
// 
// 	for (int i = 1; i < N; i++)
// 	{
// 		dp[i] = max(dp[i - 1] + v[i], v[i]);
// 		left_dp[i] = max(left_dp[i - 1] + v[i], v[i]);
// 	}
// 
// 	vector<int> right_dp(N);
// 
// 	right_dp[N - 1] = v[N - 1];
// 
// 
// 	for (int i = N - 2; i >= 0; i--)
// 	{
// 		right_dp[i] = max(right_dp[i + 1] + v[i], v[i]);
// 	}
// 
// 	for (int i : negIdx)
// 	{
// 		if (i > 0 && i < N - 1)
// 		{
// 			dp[i] = max(dp[i],right_dp[i + 1] + left_dp[i - 1]);
// 		}
// 	}
// 
// 
// 
// 	cout << *max_element(dp.begin(), dp.end());
// }
// 
=======
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
>>>>>>> 9869ec9c019dfff234cb193ee1087d3bb8c3e3ba
>>>>>>> Stashed changes
