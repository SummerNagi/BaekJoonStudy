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
//struct Point
//{
//	int y;
//	int x;
//};
//
//typedef struct Edge
//{
//	Point s;
//	Point e;
//	int c;
//
//	bool operator > (const Edge& e) const
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
//	void SetUnion(int i, int j)
//	{
//		int root_i = Find(i);
//		int root_j = Find(j);
//
//		if (root_i != root_j)
//		{
//			parent[root_j] = root_i;
//
//		}
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
//	bool IsUnion(int i, int j)
//	{
//		return Find(i) == Find(j);
//	}
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
//	vector<vector<int>> map(N, vector<int>(M));
//	vector<vector<int>> pMap(N, vector<int>(M, 0));
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> map[i][j];
//		}
//	}
//
//	int dx[4] = { -1,1,0,0 };
//	int dy[4] = { 0,0,-1,1 };
//
//	int mark = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (map[i][j])
//			{
//				queue<pair<int, int>> q;
//
//				if (pMap[i][j] == 0)
//				{
//					mark++;
//
//					q.push({ i,j });
//
//					pMap[i][j] = mark;
//
//					while (!q.empty())
//					{
//						int x = q.front().second;
//						int y = q.front().first;
//
//						q.pop();
//
//						for (int k = 0; k < 4; k++)
//						{
//							int _x = x + dx[k];
//							int _y = y + dy[k];
//
//							if (_x >= 0 && _x < M && _y >= 0 && _y < N)
//							{
//								if (map[_y][_x] == 1 && pMap[_y][_x] == 0)
//								{
//									pMap[_y][_x] = mark;
//									q.push({ _y,_x });
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	//for (int i = 0; i < N; i++)
//	//{
//	//	for (int j = 0; j < M; j++)
//	//	{
//	//		cout << pMap[i][j] << " ";
//	//	}
//	//	cout << "\n";
//	//}
//
//	priority_queue<Edge, vector<Edge>, greater<Edge>> edges;
//
//	// 각 좌표에서 상하좌우로 다리 건설해봤을 때 만나면 간선으로 만들기
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (pMap[i][j])
//			{
//				int area = pMap[i][j];
//
//				for (int k = 0; k < 4; k++)
//				{
//					int dirX = dx[k];
//					int dirY = dy[k];
//
//					// 가로 다리
//					for (int l = 1; dirX != 0 && dirX * l + j < M && dirX * l + j >= 0; l++)
//					{
//						int cur = pMap[i][dirX * l + j];
//
//						if (cur == 0)
//						{
//							continue;
//						}
//
//						if (cur == area)
//						{
//							break;
//						}
//
//						if (abs(dirX * l) - 1 < 2)
//						{
//							break;
//						}
//
//						edges.push({ {i,j},{i,dirX * l + j},abs(dirX * l) - 1 });
//						break;
//					}
//
//					// 세로 다리
//					for (int l = 1; dirY != 0 && dirY * l + i < N && dirY * l + i >= 0; l++)
//					{
//						int cur = pMap[dirY * l + i][j];
//
//						if (cur == 0)
//						{
//							continue;
//						}
//
//						if (cur == area)
//						{
//							break;
//						}
//
//						if (abs(dirY * l) - 1 < 2)
//						{
//							break;
//						}
//
//						edges.push({ {i,j},{dirY * l + i,j}, abs(dirY * l) - 1 });
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	int count = 0;
//
//	Union uf(mark + 1);
//
//	int spanning = 0;
//
//	while (count < mark - 1)
//	{
//		if (edges.empty())
//		{
//			break;
//		}
//
//		auto edge = edges.top();
//
//		Point p1 = edge.s;
//		Point p2 = edge.e;
//		int cost = edge.c;
//
//		int area1 = pMap[p1.y][p1.x];
//		int area2 = pMap[p2.y][p2.x];
//
//		if (!uf.IsUnion(area1, area2))
//		{
//			uf.SetUnion(area1, area2);
//			count++;
//			spanning += cost;
//		}
//
//		edges.pop();
//	}
//
//	for (int i = 1; i < mark; i++)
//	{
//		if (!uf.IsUnion(i, i + 1))
//		{
//			cout << -1;
//			return 0;
//		}
//	}
//
//	cout << spanning;
//}