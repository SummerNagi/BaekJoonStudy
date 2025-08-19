// #include <iostream>
// #include <vector>
// #include <climits>
// 
// using namespace std;
// 
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int T;
// 	cin >> T;
// 
// 	while (T--)
// 	{
// 		int K;
// 		cin >> K;
// 		vector<int> files(K + 1, 0);
// 		vector<vector<int>> dp(K + 1, vector<int>(K + 1));
// 		vector<int> sum(K + 1, 0);
// 
// 		for (int i = 1; i <= K; i++)
// 		{
// 			cin >> files[i];
// 			sum[i] = sum[i - 1] + files[i];
// 		}
// 
// 		for (int i = 1; i <= K; i++)
// 		{
// 			for (int j = 1; i + j <= K; j++)
// 			{
// 				dp[j][i + j] = INT_MAX;
// 
// 				for (int p = j; p < i + j; p++)
// 				{
// 					dp[j][i + j] = min(dp[j][i + j], dp[j][p] + dp[p + 1][i + j] + sum[i + j] - sum[j - 1]);
// 				}
// 			}
// 		}
// 
// 		cout << dp[1][K] << "\n";
// 	}
// }