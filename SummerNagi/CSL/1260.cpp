#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int b1260()
{
	int N = 0; int M = 0; int V = 0;
	cin >> N >> M >> V;

	vector<vector<int>> board(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; ++i)
	{
		int p1 = 0; int p2 = 0;
		cin >> p1 >> p2;
		board[p1][p2] = 1;
		board[p2][p1] = 1;
	}
	
	{
		vector<int> visit(N + 1, 1);
		stack<pair<int, int>> stk;
		stk.push(make_pair(V, 1));
		visit[V] = 0;
		while (!stk.empty())
		{
			pair<int, int>& nowInfo = stk.top();
			if (nowInfo.second == 1)
			{
				cout << nowInfo.first << " ";
			}
			for (; nowInfo.second <= N; ++nowInfo.second)
			{
				if (board[nowInfo.first][nowInfo.second] == 1 && visit[nowInfo.second] == 1)
				{
					visit[nowInfo.second] = 0;
					stk.push(make_pair(nowInfo.second, 1));
					nowInfo.second = nowInfo.second + 1;
					break ;
				}
			}
			while (!stk.empty() && stk.top().second == N + 1)
				stk.pop();
		}
		cout << endl;
	}

	{
		vector<int> visit(N + 1, 1);
		queue<int> que;
		que.push(V);
		visit[V] = 0;
		while (!que.empty())
		{
			int count = que.size();
			for (int i = 0; i < count; ++i)
			{
				int num = que.front();
				que.pop();
				cout << num << " ";
				for (int i = 1; i <= N; ++i)
				{
					if (board[num][i] == 1 && visit[i] == 1)
					{
						visit[i] = 0;
						que.push(i);
					}
				}
			}
		}
		cout << endl;
	}

	return (0);

}