#include <iostream>
#include <vector>
#include <climits>

#define INF INT_MAX

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N;
	cin >> M;

	vector<vector<int>> dist(N + 1, vector<int>(N + 1, INF));

	for (int i = 0; i < M; i++)
	{
		int a, b, c;

		cin >> a >> b >> c;

		dist[a][b] = min(c, dist[a][b]);

	}

	for (int i = 1; i <= N; i++)
	{
		dist[i][i] = 0;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (dist[i][k] != INF && dist[k][j] != INF)
				{
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (dist[i][j] != INF)
			{
				cout << dist[i][j] << " ";
			}
			else
			{
				cout << 0 << " ";
			}
		}
		cout << "\n";
	}
}