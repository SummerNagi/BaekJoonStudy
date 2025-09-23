//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//int N;
//
//vector<vector<int>> edges;
//vector<int> parent;
//vector<int> depth;
//
//void BFS(int p)
//{
//	vector<bool> visited(N + 1);
//
//	queue<pair<int, int>> q;
//
//	q.push({ p,0 });
//	visited[p] = true;
//
//	while (!q.empty())
//	{
//		int cur = q.front().first;
//		int d = q.front().second;
//
//		q.pop();
//
//		for (int n : edges[cur])
//		{
//			if (!visited[n])
//			{
//				q.push({ n,d + 1 });
//
//				visited[n] = true;
//				depth[n] = d + 1;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		cin >> N;
//
//		edges.clear();
//		parent.clear();
//		depth.clear();
//
//		edges.resize(N + 1);
//		parent.resize(N + 1, 0);
//		depth.resize(N + 1);
//
//		parent[0] = -1;
//
//		for (int i = 0; i < N - 1; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//
//			edges[a].push_back(b);
//			parent[b] = a;
//		}
//
//		int p = find(parent.begin(), parent.end(), 0) - parent.begin();
//
//		BFS(p);
//
//		int A, B;
//		cin >> A >> B;
//
//		if (depth[A] < depth[B])
//		{
//			int temp = A;
//			A = B;
//			B = temp;
//		}
//
//		while (depth[A] != depth[B])
//		{
//			A = parent[A];
//		}
//
//		while (A != B)
//		{
//			A = parent[A];
//			B = parent[B];
//		}
//
//		cout << A << "\n";
//	}
//}