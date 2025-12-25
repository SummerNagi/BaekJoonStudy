#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	constexpr long long MAX_COUNT = (1LL << 60);
	
	int N = 0;
	cin >> N;

	vector<long long> dp(N + 1, MAX_COUNT);
	dp[0] = 0;

	for (int i = 1; i <= N; ++i)
	{
		long long num = 0;
		cin >> num;

		for (int j = i; j <= N; ++j)
		{
			dp[j] = min(dp[j], dp[j - i] + num);
		}
	}

	cout << dp[N] << '\n';
	return (0);
}
