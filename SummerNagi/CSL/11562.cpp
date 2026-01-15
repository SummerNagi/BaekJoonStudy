#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	int m = 0;
	cin >> n >> m;

	constexpr int INF = numeric_limits<int>::max();
	vector<vector<int>> board(n + 1, vector<int>(n + 1, INF));

	for (int i = 1; i <= m; ++i)
	{
		int u, v, b;
		cin >> u >> v >> b;
		if (b == 1)
		{
			board[u][v] = 0;
			board[v][u] = 0;
		}
		else
		{
			board[u][v] = 0;
			board[v][u] = min(board[v][u], 1);
		}
	}

	for (int slf = 1; slf <= n; ++slf)
	{
		board[slf][slf] = 0;
	}

	for (int cross = 1; cross <= n; ++cross)
	{
		for (int start = 1; start <= n; ++start)
		{
			if (board[start][cross] == INF)
			{
				continue;
			}
			for (int end = 1; end <= n; ++end)
			{
				if (board[cross][end] == INF)
				{
					continue;
				}
				if (board[start][end] > board[start][cross] + board[cross][end])
				{
					board[start][end] = board[start][cross] + board[cross][end];
				}
			}
		}
	}
	int k = 0;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		int s, e;
		cin >> s >> e;

		cout << board[s][e] << '\n';
	}

	return (0);
}
