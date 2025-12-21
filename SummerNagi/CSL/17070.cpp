#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<vector<int>> board(N + 1, vector<int>(N, 1));
	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		cin >> num;
		for (int j = 0; j < N - 1; ++j)
		{
			cin >> board[i][j];
		}
	}

	vector<vector<int>> prev(N - 1, vector<int>(3, 0));
	vector<vector<int>> next(N - 1, vector<int>(3, 0));
	prev[0][0] = 1;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - 1; ++j)
		{
			if (board[i][j + 1] != 1)
			{
				prev[j + 1][0] += (prev[j][0] + prev[j][2]);
			}
			if (board[i + 1][j] != 1)
			{
				next[j][1] += (prev[j][1] + prev[j][2]);
			}
			if (board[i + 1][j] != 1 && board[i][j + 1] != 1 && board[i + 1][j + 1] != 1)
			{
				next[j + 1][2] += (prev[j][0] + prev[j][1] + prev[j][2]);
			}
		}
		if (i == N - 1)
		{
			cout << prev[N - 2][0] + prev[N - 2][1] + prev[N - 2][2] << '\n';
		}
		prev = move(next);
		next.assign(N - 1, std::vector<int>(3, 0));
	}

	return (0);
}
