//#include <iostream>
//#include <queue>
//#include <string>
//#include <numeric>
//#include <cmath>
//#include <vector>
//#include <cctype>
//
//
//
//using namespace std;
//struct Edge
//{
//	int s, e, c;
//
//	bool operator>(const Edge& e1) const
//	{
//		return this->c > e1.c;
//	}
//};
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
//	int Find(int i)
//	{
//		if (parent[i] == i)
//		{
//			return i;
//		}
//
//		parent[i] = Find(parent[i]);
//
//		return parent[i];
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
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	priority_queue<Edge, vector<Edge>, greater<Edge>> links;
//
//	int total = 0;
//
//	for (int i = 1; i <= N; i++)
//	{
//		string temp;
//		cin >> temp;
//
//		for (int j = 0; j < temp.length(); j++)
//		{
//			if (temp[j] == '0')
//			{
//				continue;
//			}
//
//			int len = 0;
//
//			if (isupper(temp[j]))
//			{
//				len = temp[j] - 'A' + 27;
//			}
//			else
//			{
//				len = temp[j] - 'a' + 1;
//			}
//
//			total += len;
//
//			links.push({ i,j + 1,len });
//
//		}
//	}
//
//	int count = 0;
//	int length = 0;
//	Union uf(N + 1);
//
//	while (!links.empty() && count < N - 1)
//	{
//		Edge cur = links.top();
//
//		links.pop();
//
//		int s = cur.s;
//		int e = cur.e;
//		int c = cur.c;
//
//		if (!uf.IsUnion(s, e))
//		{
//			uf.SetUnion(s, e);
//			length += c;
//			count++;
//		}
//	}
//
//
//	bool all_connected = true;
//	for (int i = 2; i <= N; i++)
//	{
//		if (!uf.IsUnion(1, i))
//		{
//			all_connected = false;
//			break;
//		}
//	}
//
//	if (all_connected)
//	{
//		cout << total - length;
//	}
//	else
//	{
//		cout << -1;
//	}
//
//}
