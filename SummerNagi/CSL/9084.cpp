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
		vector<int> lst(N, 0);
		for (int& coin : lst)
		{
			cin >> coin;
		}
		int target_count = 0;
		cin >> target_count;

		vector<long long> dp(target_count + 1, 0);
		dp[0] = 1;

		for (int coin : lst)
		{
			for (int s = coin; s <= target_count; ++s)
			{
				dp[s] = dp[s] + dp[s - coin];
			}
		}

		cout << dp[target_count] << '\n';
	}
	return (0);
}
