#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int M, N, H;
	cin >> M >> N >> H;
	vector<tuple<int, int, int>> dir = 
		{ {1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1} };
	vector<vector<vector<int>>> board(H, vector<vector<int>>(N, vector<int>(M, 0)));
	queue<tuple<int, int, int>> que;
	int zero_count = 0;
	int answer = -1;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			for (int z = 0; z < M; ++z)
			{
				cin >> board[i][j][z];
				if (board[i][j][z] == 0)
				{
					zero_count = zero_count + 1;
				}
				else if (board[i][j][z] == 1)
				{
					que.push({ i, j, z });
				}
			}
		}
	}

	while (!que.empty())
	{
		int round = que.size();
		answer += 1;
		while (round--)
		{
			auto [a, b, c] = que.front();
			que.pop();
			for (auto [na, nb, nc] : dir)
			{
				na = na + a;
				nb = nb + b;
				nc = nc + c;
				if (na < 0 || na >= H || nb < 0 || nb >= N || nc < 0 || nc >= M)
				{
					continue;
				}
				if (board[na][nb][nc] == 0)
				{
					board[na][nb][nc] = 1;
					zero_count = zero_count - 1;
					que.push({ na, nb, nc });
				}
			}
		}
	}

	if (zero_count != 0)
	{
		cout << -1 << '\n';
	}
	else
	{
		cout << answer << '\n';
	}

	return (0);
}
