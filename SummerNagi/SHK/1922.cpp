//#include <iostream>
//#include <queue>
//#include <string>
//#include <numeric>
//#include <cmath>
//#include <vector>
//#include <cctype>
//
//using namespace std;
//
//struct Edge
//{
//	int s, e, c;
//	bool operator>(const Edge& e) const
//	{
//		return this->c > e.c;
//	}
//};
//
//class Union
//{
//public:
//
//	Union(int n)
//	{
//		parent.resize(n);
//		iota(parent.begin(), parent.end(), 0);
//	}
//
//	int Find(int n)
//	{
//		if (n == parent[n])
//		{
//			return parent[n];
//		}
//
//		parent[n] = Find(parent[n]);
//
//		return parent[n];
//	}
//
//	void SetUnion(int i, int j)
//	{
//		int root_i = Find(i);
//		int root_j = Find(j);
//
//		if (root_i != root_j)
//		{
//			parent[root_j] = root_i;
//		}
//	}
//
//	bool IsUnion(int i, int j)
//	{
//		return Find(i) == Find(j);
//	}
//
//	vector<int> parent;
//};
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N;
//	cin >> N;
//	int M;
//	cin >> M;
//
//	priority_queue<Edge, vector<Edge>, greater<Edge>> edges;
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//
//		cin >> a >> b >> c;
//
//		edges.push({ a,b,c });
//	}
//
//	int count = 0;
//	int spanning = 0;
//
//	Union uf(N + 1);
//
//	while (!edges.empty() && count < N - 1)
//	{
//		Edge cur = edges.top();
//
//		edges.pop();
//
//		int s = cur.s;
//		int e = cur.e;
//		int c = cur.c;
//
//		if (!uf.IsUnion(s, e))
//		{
//			count++;
//			spanning += c;
//
//			uf.SetUnion(s, e);
//		}
//	}
//
//	cout << spanning;
//}