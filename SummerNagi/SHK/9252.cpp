//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//pair<int, string> dp[1001][1001];
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string str1, str2;
//
//	for (int i = 0; i < 1001; i++)
//	{
//		dp[i][0] = { 0,string() };
//		dp[0][i] = { 0,string() };
//	}
//
//	cin >> str1;
//	cin >> str2;
//
//	int LCS = -1;
//
//	string answer;
//
//	for (int i = 1; i <= str1.length(); i++)
//	{
//		for (int j = 1; j <= str2.length(); j++)
//		{
//			if (str1[i - 1] == str2[j - 1])
//			{
//				dp[i][j].first = dp[i - 1][j - 1].first + 1;
//				dp[i][j].second = dp[i - 1][j - 1].second + str2[j - 1];
//			}
//			else
//			{
//				if (dp[i - 1][j] > dp[i][j - 1])
//				{
//					dp[i][j].first = dp[i - 1][j].first;
//					dp[i][j].second = dp[i - 1][j].second;
//				}
//				else
//				{
//					dp[i][j].first = dp[i][j - 1].first;
//					dp[i][j].second = dp[i][j - 1].second;
//				}
//			}
//
//			if (dp[i][j].first > LCS)
//			{
//				LCS = dp[i][j].first;
//				answer = dp[i][j].second;
//			}
//		}
//	}
//
//	cout << LCS << "\n" << answer;
//}
//
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int dp[1001][1001] = { 0 };
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string str1, str2;
//
//	cin >> str1;
//	cin >> str2;
//
//	int LCS = -1;
//
//	for (int i = 1; i <= (int)str1.length(); i++)
//	{
//		for (int j = 1; j <= (int)str2.length(); j++)
//		{
//			if (str1[i - 1] == str2[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			else
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//			}
//
//			if (dp[i][j] > LCS)
//			{
//				LCS = dp[i][j];
//			}
//		}
//	}
//	cout << LCS << "\n";
//
//	int i = (int)str1.length();
//	int j = (int)str2.length();
//	string answer;
//
//	while (i > 0 && j > 0)
//	{
//		if (str1[i - 1] == str2[j - 1])
//		{
//			answer += str1[i - 1];
//			i--;
//			j--;
//		}
//		else
//		{
//			if (dp[i - 1][j] > dp[i][j - 1])
//			{
//				i--;
//			}
//			else
//			{
//				j--;
//			}
//		}
//	}
//
//	reverse(answer.begin(), answer.end());
//	cout << answer;
//}