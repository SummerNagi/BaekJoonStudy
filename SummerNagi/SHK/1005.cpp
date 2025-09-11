#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int N, K;
		cin >> N >> K;

		vector<int> build(N + 1);

		for (int i = 1; i <= N; i++)
		{
			cin >> build[i];
		}

		vector<vector<int>> preBuild(K + 1, vector<int>());
		vector<int> indegree(N + 1, 0);

		for (int i = 1; i <= K; i++)
		{
			int a, b;
			cin >> a >> b;

			preBuild[a].push_back(b);
			indegree[b]++;
		}

		int W;
		cin >> W;

		vector<int> tech(N + 1, 0);
		queue<int> q;

		for (int i = 1; i <= N; i++)
		{
			if (indegree[i] == 0)
			{
				q.push(i);
			}
		}

		while (!q.empty())
		{
			int cur = q.front();

			q.pop();

			for (int n : preBuild[cur])
			{
				indegree[n]--;

				tech[n] = max(tech[n], tech[cur] + build[cur]);

				if (indegree[n] == 0)
				{
					q.push(n);
				}
			}
		}

		cout << tech[W] + build[W] << "\n";
	}
}