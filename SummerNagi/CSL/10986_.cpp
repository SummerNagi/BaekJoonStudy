#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N = 0;
	int M = 0;
	cin >> N >> M;

	vector<long long> dp(M, 0);
	dp[0] = 1;

	long long answer = 0;
	long long prev = 0;

	for (int i = 0; i < N; ++i)
	{
		long long num = 0;
		cin >> num;
		prev = (prev + num) % M;
		answer += dp[prev];
		dp[prev] = dp[prev] + 1;
	}

	cout << answer << '\n';

	return (0);
}
