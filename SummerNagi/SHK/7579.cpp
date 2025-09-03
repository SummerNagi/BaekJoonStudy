 //#include <iostream>
 //#include <vector>
 //#include <algorithm>
 //
 //using namespace std;
 //
 //
 //int main()
 //{
 //	ios::sync_with_stdio(false);
 //	cin.tie(NULL);
 //	cout.tie(NULL);
 //
 //	int N, M;
 //	cin >> N >> M;
 //
 //
 //	vector<int> app(N + 1);
 //	vector<int> cost(N + 1);
 //
 //	int total = 0;
 //	for (int i = 1; i <= N; i++)
 //	{
 //		cin >> app[i];
 //	}
 //
 //	for (int i = 1; i <= N; i++)
 //	{
 //		cin >> cost[i];
 //		total += cost[i];
 //	}
 //
 //	vector<int> dp(total + 1, 0);
 //
 //
 //	for (int i = 1; i <= N; i++)
 //	{
 //		for (int j = total; j >= cost[i]; j--)
 //		{
 //			dp[j] = max(dp[j], dp[j - cost[i]] + app[i]);
 //		}
 //	}
 //
 //	for (int i = 0; i <= total; i++)
 //	{
 //		if (dp[i] >= M)
 //		{
 //			cout << i;
 //			break;
 //		}
 //	}
 //}
// 
// #include <iostream>
// #include <vector>
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
// 	int N, M;
// 	cin >> N >> M;
// 
// 
// 	vector<int> app(N + 1);
// 	vector<int> cost(N + 1);
// 
// 	vector<pair<int, vector<int>>> dp(N * 100 + 1, { -1,vector<int>() });
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		cin >> app[i];
// 	}
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		cin >> cost[i];
// 	}
// 
// 
// 	for (int i = 0; i < N * 100 + 1; i++)
// 	{
// 		dp[i].first = 0;
// 		for (int j = 1; j <= N; j++)
// 		{
// 			if (i - cost[j] >= 0)
// 			{
// 				if (dp[i].first < dp[i - cost[j]].first + app[j] && find(dp[i - cost[j]].second.begin(), dp[i - cost[j]].second.end(), j) == dp[i - cost[j]].second.end())
// 				{
// 					dp[i].first = dp[i - cost[j]].first + app[j];
// 					dp[i].second = dp[i - cost[j]].second;
// 					dp[i].second.push_back(j);
// 				}
// 			}
// 		}
// 	}
// 
// 	for (int i = 0; i < N * 100 + 1; i++)
// 	{
// 		if (dp[i].first >= M)
// 		{
// 			cout << i;
// 			break;
// 		}
// 	}
// }