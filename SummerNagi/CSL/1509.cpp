#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s = "";
	cin >> s;

	int n = s.size();
	s = " " + s;

	vector<vector<char>> isPal(n + 1, vector<char>(n + 1, 0));
	vector<int> dp(n + 1, n + 1);
	dp[0] = 0;

	for (int i = 1; i <= n; ++i)
	{
		isPal[i][i] = 1;
	}

	for (int i = 1; i < n; ++i)
	{
		if (s[i] == s[i + 1])
		{
			isPal[i][i + 1] = 1;
		}
	}

	for (int len = 3; len <= n; ++len)
	{
		for (int i = 1; i + len - 1 <= n; ++i)
		{
			int j = i + len - 1;
			if (s[i] == s[j] && isPal[i + 1][j - 1])
			{
				isPal[i][j] = 1;
			}
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (isPal[j][i])
			{
				dp[i] = min(dp[i], dp[j - 1] + 1);
			}
		}
	}

	cout << dp[n] << '\n';
	return (0);
}
