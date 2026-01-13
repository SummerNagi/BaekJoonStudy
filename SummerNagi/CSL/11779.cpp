#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int K = 0;
	cin >> N >> K;

	constexpr int MIN_INF = 0;
	constexpr int MAX_INF = 100'000;

	vector<int> dp(MAX_INF + 1, MAX_INF + 1);
	vector<int> prev_memo(MAX_INF + 1, -1);

	queue<int> que;
	dp[N] = 0;
	que.push(N);

	while (!que.empty())
	{

		int num = que.front();
		que.pop();
		if (num == K)
		{
			break;
		}
		if (num - 1 >= MIN_INF && dp[num - 1] > dp[num] + 1)
		{
			dp[num - 1] = dp[num] + 1;
			prev_memo[num - 1] = num;
			que.push(num - 1);
		}

		if (num + 1 <= MAX_INF && dp[num + 1] > dp[num] + 1)
		{
			dp[num + 1] = dp[num] + 1;
			prev_memo[num + 1] = num;
			que.push(num + 1);
		}

		if (num * 2 <= MAX_INF && dp[num * 2] > dp[num] + 1)
		{
			dp[num * 2] = dp[num] + 1;
			prev_memo[num * 2] = num;
			que.push(num * 2);
		}
	}

	cout << dp[K] << '\n';

	vector<int> answer;
	int cur = K;
	answer.reserve(cur);

	while (prev_memo[cur] != -1)
	{
		answer.push_back(cur);
		cur = prev_memo[cur];
	}
	answer.push_back(N);

	for (vector<int>::reverse_iterator it = answer.rbegin(); it != answer.rend(); ++it)
	{
		cout << *it << ' ';
	}

	return (0);
}
