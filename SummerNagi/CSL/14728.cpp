#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int T = 0;
	cin >> N >> T;

	vector<long long> dp(T + 1, 0);
	for (int i = 0; i < N; ++i)
	{
		int time = 0;
		cin >> time;
		long long count = 0;
		cin >> count;
		for (int j = T; j >= time; --j)
		{
			dp[j] = max(dp[j], dp[j - time] + count);
		}
	}

	cout << dp[T] << '\n';
	return (0);
}
