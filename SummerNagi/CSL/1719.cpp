#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	int m = 0;
	cin >> n >> m;

	const int INF = (1 << 29);

	vector<vector<int>> vec(n + 1, vector<int>(n + 1, INF));
	vector<vector<int>> answer(n + 1, vector<int>(n + 1, 0));

	for (int i = 0; i < m; ++i)
	{
		int start = 0;
		int end = 0;
		int time = 0;
		cin >> start >> end >> time;

		if (vec[start][end] > time)
		{
			vec[start][end] = time;
			vec[end][start] = time;
			answer[start][end] = end;
			answer[end][start] = start;
		}
	}

	for (int slf = 1; slf <= n; ++slf)
	{
		vec[slf][slf] = 0;
	}

	for (int cross = 1; cross <= n; ++cross)
	{
		for (int start = 1; start <= n; ++start)
		{
			for (int end = 1; end <= n; ++end)
			{
				if (vec[start][end] > vec[start][cross] + vec[cross][end])
				{
					vec[start][end] = vec[start][cross] + vec[cross][end];
					answer[start][end] = answer[start][cross];
				}
			}
		}
	}

	for (int start = 1; start <= n; ++start)
	{
		for (int end = 1; end <= n; ++end)
		{
			if (answer[start][end] == 0)
			{
				cout << "- ";
			}
			else
			{
				cout << answer[start][end] << ' ';
			}
		}
		cout << '\n';
	}

	return (0);
}
