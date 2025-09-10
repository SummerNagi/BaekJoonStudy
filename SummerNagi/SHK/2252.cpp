#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> bigger(N + 1, vector<int>());
	vector<int> degree(N + 1, 0);

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		bigger[a].push_back(b);

		degree[b]++;
	}

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		if (degree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int cur = q.front();

		q.pop();

		cout << cur << " ";

		for (int n : bigger[cur])
		{
			degree[n]--;

			if (degree[n] == 0)
			{
				q.push(n);
			}
		}
	}
}