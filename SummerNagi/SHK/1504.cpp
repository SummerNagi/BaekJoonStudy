#include <iostream>
#include <vector>
#include <queue>
#include <climits>

#define INF INT_MAX

using namespace std;

struct Node
{
	int vertex;
	int cost;
};

struct compare
{
	bool operator()(const Node& a, const Node& b)
	{
		return a.cost > b.cost;
	}
};

int N, E;

vector<vector<Node>> edges;

long long DijKstra(int s, int t)
{
	if (s == t)
	{
		return 0;
	}

	priority_queue<Node, vector<Node>, compare> pq;
	vector<long long> mDistance(N + 1, INF);

	pq.push({ s,0 });
	mDistance[s] = 0;

	while (!pq.empty())
	{
		Node cur = pq.top();

		int curV = cur.vertex;
		int curC = cur.cost;

		pq.pop();

		if (mDistance[curV] < curC)
		{
			continue;
		}

		for (const Node& n : edges[curV])
		{
			int nextV = n.vertex;
			int nextC = n.cost;

			if (mDistance[nextV] > curC + nextC)
			{
				mDistance[nextV] = curC + nextC;

				pq.push({ nextV, curC + nextC });
			}
		}
	}

	return mDistance[t];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> E;

	if (E == 0)
	{
		cout << -1;
		return 0;
	}

	edges.resize(N + 1);

	for (int i = 0; i < E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		edges[a].push_back({ b,c });
		edges[b].push_back({ a,c });
	}

	int v1, v2;

	cin >> v1 >> v2;

	long long v1v2vn = DijKstra(1, v1) + DijKstra(v1, v2) + DijKstra(v2, N);
	long long v2v1vn = DijKstra(1, v2) + DijKstra(v2, v1) + DijKstra(v1, N);

	long long answer = min(v1v2vn, v2v1vn);

	if (answer >= INF || answer < 0)
	{
		cout << -1;
		return 0;
	}

	cout << answer;
}