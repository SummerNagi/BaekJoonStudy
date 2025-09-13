//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <queue>
//#include <tuple>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//typedef struct Edge
//{
//	int s, e, c;
//
//	bool operator >(const Edge& e) const
//	{
//		return this->c > e.c;
//	}
//};
//
//class Union
//{
//public:
//	Union(int n)
//	{
//		parent.resize(n);
//
//		iota(parent.begin(), parent.end(), 0);
//	}
//
//	int Find(int n)
//	{
//		if (n == parent[n])
//		{
//			return n;
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
//
//	vector<int> parent;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N, M;
//	cin >> N >> M;
//
//	priority_queue<Edge, vector<Edge>, greater<Edge>> edges;
//
//	for (int i = 0; i < M; i++)
//	{
//		int A, B, C;
//		cin >> A >> B >> C;
//
//		edges.push({ A,B,C });
//	}
//
//	int count = 0;
//	int spanning = 0;
//
//	Union uf(N + 1);
//
//	while (count < N - 2)
//	{
//		if (edges.empty())
//		{
//			break;
//		}
//
//		Edge e = edges.top();
//
//		edges.pop();
//
//		int h1 = e.s;
//		int h2 = e.e;
//		int c = e.c;
//
//		if (!uf.IsUnion(h1, h2))
//		{
//			cout << "¿¬°á " << h1 << "--" << h2 << "\n";
//			count++;
//			uf.SetUnion(h1, h2);
//			spanning += c;
//		}
//	}
//
//	cout << spanning;
//}