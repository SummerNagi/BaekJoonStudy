// ÀÌºÐ Å½»ö
//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//
//int A, B;
//int N, M;
//
//int maxWeight = -1;
//
//vector<tuple<int, int, int>> bridges;
//
//bool Check(int mid)
//{
//	vector<vector<int>> edges(N + 1, vector<int>());
//
//	for (int i = 0; i < M; i++)
//	{
//		int cost = get<0>(bridges[i]);
//		if (cost >= mid)
//		{
//			int x = get<1>(bridges[i]);
//			int y = get<2>(bridges[i]);
//			edges[x].push_back(y);
//			edges[y].push_back(x);
//		}
//	}
//
//
//	vector<bool> visited(N + 1, false);
//
//	queue<int> q;
//
//	q.push(A);
//	visited[A] = true;
//
//	while (!q.empty())
//	{
//		int cur = q.front();
//
//		q.pop();
//
//		if (cur == B)
//		{
//			return true;
//		}
//
//		for (int n : edges[cur])
//		{
//			if (!visited[n])
//			{
//				q.push(n);
//				visited[n] = true;
//			}
//		}
//	}
//
//	return false;
//}
//
//
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	cin >> N >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		bridges.push_back({ c,a,b });
//
//		maxWeight = max(c, maxWeight);
//	}
//
//	cin >> A >> B;
//
//	int low = 1, high = maxWeight;
//	int answer = -1;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//
//		if (Check(mid))
//		{
//			answer = max(answer, mid);
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//
//	cout << answer;
//}


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Union
{
public:
	Union(int n)
	{
		parent.resize(n);

		iota(parent.begin(), parent.end(), 0);
	}

	int Find(int n)
	{
		if (n == parent[n])
		{
			return n;
		}

		return parent[n] = Find(parent[n]);
	}

	void SetUnion(int i, int j)
	{
		int root_i = Find(i);
		int root_j = Find(j);

		if (root_i != root_j)
		{
			parent[root_j] = root_i;
		}
	}

	bool IsUnion(int i, int j)
	{
		return Find(i) == Find(j);
	}

	vector<int> parent;
};

struct Info
{
	int a, b, c;
};

bool Compare(const Info& i1, const Info& i2)
{
	return i1.c > i2.c;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<Info> bridges(M);

	int maxWeight = -1;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		bridges[i] = { a,b,c };

		maxWeight = max(c, maxWeight);
	}

	sort(bridges.begin(), bridges.end(), Compare);

	int to, from;
	cin >> to >> from;

	Union uf(N + 1);

	int answer = -1;
	for (int i = 0; i < M; i++)
	{
		const Info& info = bridges[i];

		uf.SetUnion(info.a, info.b);

		if (uf.IsUnion(to, from))
		{
			answer = info.c;
			break;
		}
	}

	cout << answer;
}