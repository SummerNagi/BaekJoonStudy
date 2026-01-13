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

	
	vector<int> memo(N, -1);
	vector<int> lst(N, 0);
	for (int& num : lst)
	{
		cin >> num;
	}

	vector<pair<int, int>> dp;
	dp.reserve(N);
	int idx = 0;

	for (int i = 0; i < N; ++i)
	{
		int num = lst[i];
		vector<pair<int, int>>::iterator it = lower_bound(dp.begin(), dp.end(), num,
			[](const pair<int, int>& a, int value) {
				return (a.first < value);
			});
		if (it == dp.end())
		{
			if (dp.empty())
			{
				memo[i] = -1;
			}
			else
			{
				memo[i] = dp.back().second;
			}
			dp.push_back({ num, i });
		}
		else
		{
			if (it == dp.begin())
			{
				memo[i] = -1;
			}
			else
			{
				int dist = it - dp.begin();
				memo[i] = dp[dist - 1].second;
			}
			*it = { num, i };
		}
	}

	cout << dp.size() << '\n';
	
	vector<int> answer;
	answer.reserve(dp.size());
	idx = dp.back().second;
	while (true)
	{
		if (idx == -1)
		{
			break;
		}
		answer.push_back(lst[idx]);
		idx = memo[idx];
	}

	for (vector<int>::reverse_iterator it = answer.rbegin(); it != answer.rend(); ++it)
	{
		cout << *it << ' ';
	}

	return (0);
}
