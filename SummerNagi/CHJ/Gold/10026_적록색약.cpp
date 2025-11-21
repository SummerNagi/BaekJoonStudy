#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<string> board;
vector<vector<bool>> visited;
int n, ans1, ans2;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void bfs(int x, int y, char color, int mode)
{
	if (!mode)
		ans1++;
	else
		ans2++;

	queue<pair<int, int>> q;

	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty())
	{
		auto cur = q.front();

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= n)
				continue;
			if (visited[nx][ny] || board[nx][ny] != color)
				continue;

			q.push({ nx, ny });
			visited[nx][ny] = true;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	board.resize(n, string(n, 0));
	visited.resize(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> board[i][j];


	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!visited[i][j])
				bfs(i, j, board[i][j], 0);
	

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (board[i][j] == 'G')
				board[i][j] = 'R';

	fill(visited.begin(), visited.end(), vector<bool>(n, false));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (!visited[i][j])
				bfs(i, j, board[i][j], 1);

	cout << ans1 << ' ' << ans2;
	return 0;
}
