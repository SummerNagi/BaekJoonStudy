#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T = 0;
	cin >> T;

	while (T--)
	{
		int N = 0;
		cin >> N;

		vector<int> coins(N, 0);
		for (int& coin : coins)
		{
			cin >> coin;
		}

		int M = 0;
		cin >> M;

		vector<long long> dp(M + 1, 0);
		dp[0] = 1;

		for (const int& coin : coins)
		{
			for (int k = coin; k <= M; ++k)
			{
				dp[k] += + dp[k - coin];
			}
		}
		cout << dp[M] << '\n';
	}

	return (0);
}
