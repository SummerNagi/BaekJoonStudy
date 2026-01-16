#include <iostream>
#include <vector>
#include <queue>
#include <numeric>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	const vector<pair<int, int>>look = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

	int N = 0;
	int M = 0;
	cin >> N >> M;

	int r = 0;
	int c = 0;
	int dir = 0;
	cin >> r >> c >> dir;

	vector<vector<int>> board(N, vector<int>(M, 0));

	for (vector<int>& vec : board)
	{
		for (int& num : vec)
		{
			cin >> num;
		}
	}

	auto rot = [](int a) {
		a = (a + 3) % 4;
		return (a);
		};
	
	queue<pair<int, int>> que;
	que.push({ r, c });
	int answer = 0;
	while (!que.empty())
	{
		auto [r, c] = que.front();
		que.pop();
		if (board[r][c] == 0)
		{
			board[r][c] = 2;
			answer = answer + 1;
			que.push({ r, c });
			continue;
		}
		bool flag = false;
		for (auto [nr, nc] : look)
		{
			nr = r + nr;
			nc = c + nc;
			if (board[nr][nc] == 1 || board[nr][nc] == 2)
			{
				continue;
			}
			else
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			dir = rot(dir);
			auto [nr, nc] = look[dir];
			nr = nr + r;
			nc = nc + c;
			if (board[nr][nc] == 1 || board[nr][nc] == 2)
			{
				que.push({ r, c });
			}
			else
			{
				que.push({ nr, nc });
			}
		}
		else
		{
			int nr = r - look[dir].first;
			int nc = c - look[dir].second;
			if (board[nr][nc] != 1)
			{
				que.push({ nr, nc });
			}
		}
	}

	cout << answer << '\n';

	return (0);
}
