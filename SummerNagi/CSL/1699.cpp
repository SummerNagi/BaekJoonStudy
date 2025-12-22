#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> dp(N + 1, 2147483647);
	dp[0] = 0;
	for (int i = 1; i <= N; ++i)
	{
		for (int j = (int)sqrt(i) + 1; j >= 1; --j)
		{
			if (i >= j * j)
			{
				dp[i] = min(dp[i], dp[i - (j * j)] + 1);
			}
		}
	}

	cout << dp[N] << '\n';

	return (0);
}
