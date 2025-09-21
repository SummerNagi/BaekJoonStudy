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
//class Union
//{
//public:
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
//			return n;
//		}
//
//		return parent[n] = Find(parent[n]);
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
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//
//	cin >> N >> M;
//
//	Union uf(N);
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//
//		if (!uf.IsUnion(a, b))
//		{
//			uf.SetUnion(a, b);
//		}
//		else
//		{
//			cout << i + 1;
//			return 0;
//		}
//	}
//
//	cout << 0;
//}