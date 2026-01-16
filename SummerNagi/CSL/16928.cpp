#include <iostream>
#include <vector>
#include <queue>
#include <numeric>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	int M = 0;
	cin >> N >> M;
	
	vector<int> dice(6, 0);
	iota(dice.begin(), dice.end(), 1);

	vector<int> board(101, -1);

	for (int i = 0; i < N + M; ++i)
	{
		int start = 0;
		int end = 0;
		cin >> start >> end;

		board[start] = end;
	}
	queue<int> que;
	que.push(1);
	int answer = -1;

	while (!que.empty())
	{
		int round = que.size();
		while (round--)
		{
			int start = que.front();
			que.pop();
			if (start == 100)
			{
				while (!que.empty())
				{
					que.pop();
				}
				break;
			}
			for (int num : dice)
			{
				int next = start + num;
				if (next > 100)
				{
					continue;
				}
				if (board[next] == -1)
				{
					board[next] = 0;
					que.push(next);
				}
				else if (board[next] == 0)
				{
					continue;
				}
				else
				{
					if (board[board[next]] == 0)
					{
						continue;
					}
					else
					{
						que.push(board[next]);
						board[next] = 0;
						board[board[next]] = 0;
					}
				}
			}
		}
		answer = answer + 1;
	}

	cout << answer << '\n';

	return (0);
}
