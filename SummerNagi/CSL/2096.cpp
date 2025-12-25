#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> min_dp(3, 0);
	vector<int> max_dp(3, 0);

	for (int i = 0; i < N; ++i)
	{
		int v1, v2, v3;
		cin >> v1 >> v2 >> v3;
		vector<int> next_min_dp(3, 0);
		vector<int> next_max_dp(3, 0);
		next_min_dp[0] = min(min_dp[0], min_dp[1]) + v1;
		next_min_dp[1] = min({ min_dp[0], min_dp[1], min_dp[2] }) + v2;
		next_min_dp[2] = min(min_dp[1], min_dp[2]) + v3;

		next_max_dp[0] = max(max_dp[0], max_dp[1]) + v1;
		next_max_dp[1] = max({ max_dp[0], max_dp[1], max_dp[2] }) + v2;
		next_max_dp[2] = max(max_dp[1], max_dp[2]) + v3;

		min_dp.swap(next_min_dp);
		max_dp.swap(next_max_dp);
	}

	cout << max({ max_dp[0], max_dp[1], max_dp[2] }) << '\n';
	cout << min({ min_dp[0], min_dp[1], min_dp[2] }) << '\n';

	return (0);
}
