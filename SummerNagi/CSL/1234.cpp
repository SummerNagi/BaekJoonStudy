#include <iostream>
#include <vector>
#include <map>
#include <tuple>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	constexpr int three[4] = {0, 6, 90, 1680 };
	constexpr int two[6] = {0, 2, 6, 20, 70, 252 };

	int N = 0;
	cin >> N;


	vector<int> colors(3, 0);

	for (int i = 0; i < 3; ++i)
	{
		cin >> colors[i];
	}

	

	map<tuple<int, int, int>, long long> dp;
	dp[{colors[0], colors[1], colors[2]}] = 1;
	for (int i = 1; i <= N; ++i)
	{
		map<tuple<int, int, int>, long long> next;
		for (map<tuple<int, int, int>, long long>::iterator it = dp.begin(); it != dp.end(); ++it)
		{
			auto [a, b, c] = it->first;
			long long value = it->second;
			if (i >= 3 && i % 3 == 0)
			{
				int num = i / 3;
				if (a - num >= 0 && b - num >= 0 && c - num >= 0)
				{
					next[{a - num, b - num, c - num}] = next[{a - num, b - num, c - num}] + (three[num] * value);
				}
			}
			if (i >= 2 && i % 2 == 0)
			{
				int num = i / 2;
				if (a - num >= 0 && b - num >= 0)
				{
					next[{a - num, b - num, c}] = next[{a - num, b - num, c}] + (two[num] * value);
				}
				if (a - num >= 0 && c - num >= 0)
				{
					next[{a - num, b, c - num}] = next[{a - num, b, c - num}] + (two[num] * value);
				}
				if (b - num >= 0 && c - num >= 0)
				{
					next[{a, b - num, c - num}] = next[{a, b - num, c - num}] + (two[num] * value);
				}
			}
			int num = i;
			if (a - num >= 0)
			{
				next[{a - num, b, c}] = next[{a - num, b, c}] + value;
			}
			if (b - num >= 0)
			{
				next[{a, b - num, c}] = next[{a, b - num, c}] + value;
			}
			if (c - num >= 0)
			{
				next[{a, b, c - num}] = next[{a, b, c - num}] + value;
			}
		}
		dp.swap(next);
	}

	long long answer = 0;

	for (map<tuple<int, int, int>, long long>::iterator it = dp.begin(); it != dp.end(); ++it)
	{
		answer = answer + it->second;
	}

	cout << answer << '\n';

	return (0);
}
