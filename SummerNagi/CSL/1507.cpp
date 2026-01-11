#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	constexpr int INF = (1 << 29);

	int N = 0;
	
	cin >> N;

	vector<vector<int>> vec(N, vector<int>(N, INF));
	vector<vector<bool>> check(N, vector<bool>(N, true));

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> vec[i][j];
		}
	}

	for (int cross = N - 1; cross >= 0; --cross)
	{
		for (int start = N - 1; start >= 0; --start)
		{
			if (start == cross)
			{
				continue;
			}
			for (int end = N - 1; end >= 0; --end)
			{
				if (end == cross || start == end)
				{
					continue;
				}
				if (vec[start][end] > vec[start][cross] + vec[cross][end])
				{
					cout << -1 << '\n';
					return (0);
				}
				if (vec[start][end] == vec[start][cross] + vec[cross][end])
				{
					check[start][end] = false;
				}
			}
		}
	}

	int answer = 0;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (check[i][j] == true)
			{
				answer += vec[i][j];
			}
		}
	}

	cout << answer << '\n';

	return (0);
}
