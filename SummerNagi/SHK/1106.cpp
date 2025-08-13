// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int C, N;
// 	cin >> C >> N;
// 
// 	vector<pair<int, int>> invest(N + 1);
// 	vector<vector<int>> dp(N + 1, vector<int>(C + 1));
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		int a, b;
// 		cin >> a >> b;
// 		invest[i] = { a,b };
// 	}
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		int cost = invest[i].first;
// 		int effect = invest[i].second;
// 
// 		for (int j = 1; j <= C; j++)
// 		{
// 			if (j < effect)
// 			{
// 				dp[i][j] = -1;
// 			}
// 			else
// 			{
// 				if (j % effect == 0)
// 				{
// 					dp[i][j] = cost * j / effect;
// 				}
// 				else
// 				{
// 					dp[i][j] = cost * ((j / effect) + 1);
// 				}
// 			}
// 
// 			//cout << dp[i][j] << " ";
// 		}
// 		//cout << endl;
// 	}
// 	//cout << "-----------------------------\n";
// 
// 
// 	// i�� ���ñ��� �����ؼ� j��ŭ�� ȫ�� ȿ���� ���� �� ��� �ּ� ���
// 	for (int i = 2; i <= N; i++)
// 	{
// 		int callup = -1;
// 		for (int j = 2; j <= C; j++)
// 		{
// 			if (dp[i - 1][j] != -1)
// 			{
// 				if (dp[i][j] == -1)
// 				{
// 					dp[i][j] = dp[i - 1][j];
// 					callup = j;
// 				}
// 				else
// 				{
// 					if (callup == -1)
// 					{
// 						if (dp[i - 1][j] < dp[i][j])
// 						{
// 							// dp[i][callup] + dp[i][callup - j], dp[i-1,j],dp[i][j]
// 							dp[i][j] = dp[i - 1][j];
// 							callup = j;
// 						}
// 						else
// 						{
// 							callup = -1;
// 						}
// 					}
// 					else
// 					{
// 						if (dp[i][j - callup] != -1)
// 						{
// 							dp[i][j] = min(min(dp[i][callup] + dp[i][j - callup], dp[i][j]), dp[i - 1][j]);
// 						}
// 					}
// 				}
// 
// 			}
// 			//cout << dp[i][j] << " ";
// 		}
// 		//cout << endl;
// 	}
// 
// 	cout << dp[N][C];
// 
// }
// 
// 
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// 
// using namespace std;
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int C, N;
// 	cin >> C >> N;
// 
// 	vector<pair<int, int>> invest(N);
// 
// 	// i���� ���� Ȯ���ϴµ� �ʿ��� �ּ� ���
// 	vector<int> dp(C + 101, 1e9);
// 	dp[0] = 0;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		int a, b;
// 		cin >> a >> b;
// 		invest[i] = { a,b };
// 	}
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		int cost = invest[i].first;
// 		int effect = invest[i].second;
// 
// 		//j��° ���ø� ���� ���� �� �ִ� ȿ��(effect)��ŭ�� ���� �߰��� Ȯ������ ���� ���
// 		for (int j = effect; j <= C + 100; j++)
// 		{
// 			dp[j] = min(dp[j - effect] + cost, dp[j]);
// 		}
// 	}
// 
// 	int result = 1e9;
// 	for (int i = C; i <= C + 100; i++)
// 	{
// 		result = min(result, dp[i]);
// 	}
// 
// 	cout << result << endl;
// 
// }