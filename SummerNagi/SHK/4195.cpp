//#include <iostream>
//#include <queue>
//#include <string>
//#include <numeric>
//#include <cmath>
//#include <cctype>
//#include <unordered_map>
//
//using namespace std;
//
//class Union
//{
//public:
//	const string& Find(const string& str)
//	{
//		if (parent[str] == str)
//		{
//			return str;
//		}
//
//		return parent[str] = Find(parent[str]);
//	}
//
//	void SetUnion(const string& s1, const string& s2)
//	{
//		const string& parent_s1 = Find(s1);
//		const string& parent_s2 = Find(s2);
//
//		if (parent_s1 != parent_s2)
//		{
//			parent[parent_s2] = parent_s1;
//
//			UnionSize[parent_s1] += UnionSize[parent_s2];
//		}
//	}
//
//	bool IsUnion(const string& i, const string& j)
//	{
//		return Find(i) == Find(j);
//	}
//
//
//	unordered_map<string, string> parent;
//	unordered_map<string, int> UnionSize;
//};
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
//		int F;
//		cin >> F;
//
//		Union uf;
//
//		while (F--)
//		{
//			string a, b;
//			cin >> a >> b;
//
//			if (uf.parent.find(a) == uf.parent.end())
//			{
//				uf.parent[a] = a;
//				uf.UnionSize[a] = 1;
//			}
//
//			if (uf.parent.find(b) == uf.parent.end())
//			{
//				uf.parent[b] = b;
//				uf.UnionSize[b] = 1;
//			}
//
//			if (!uf.IsUnion(a, b))
//			{
//				uf.SetUnion(a, b);
//
//				cout << uf.UnionSize[uf.Find(a)] << "\n";
//			}
//			else
//			{
//				cout << uf.UnionSize[uf.Find(a)] << "\n";
//			}
//		}
//	}
//}