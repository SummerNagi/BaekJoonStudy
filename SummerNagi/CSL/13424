#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T = 0;
	cin >> T;

	while (T--)
	{
		int N = 0;
		int M = 0;
		cin >> N >> M;

		constexpr int INF = 1e9;
		vector<vector<int>> board(N + 1, vector<int>(N + 1, INF));

		for (int i = 1; i <= M; ++i)
		{
			int start = 0;
			int end = 0;
			int cost = 0;
			cin >> start >> end >> cost;
			if (board[start][end] > cost)
			{
				board[start][end] = cost;
				board[end][start] = cost;
			}
		}

		for (int slf = 1; slf <= N; ++slf)
		{
			board[slf][slf] = 0;
		}

		int K = 0;
		cin >> K;

		vector<int> human(K, 0);
		for (int& num : human)
		{
			cin >> num;
		}

		for (int cross = 1; cross <= N; ++cross)
		{
			for (int start = 1; start <= N; ++start)
			{
				for (int end = 1; end <= N; ++end)
				{
					if (board[start][end] > board[start][cross] + board[cross][end])
					{
						board[start][end] = board[start][cross] + board[cross][end];
					}
				}
			}
		}

		int min_count = INF;
		int answer = INF;

		for (int i = 1; i <= N; ++i)
		{
			int memo = 0;
			bool flag = true;
			for (int h : human)
			{
				if (board[h][i] == INF)
				{
					flag = false;
					break;
				}
				memo += board[h][i];
			}
			if (flag)
			{
				if (min_count >= memo)
				{
					if (min_count == memo)
					{
						answer = min(i, answer);
					}
					else
					{
						answer = i;
					}
					min_count = memo;
				}
			}
		}

		if (answer == INF)
		{
			cout << 0 << '\n';
		}
		else
		{
			cout << answer << '\n';
		}
	}

	return (0);
}
