//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//#define INF INT_MAX
//
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//
//int N, M;
//
//struct compare
//{
//	bool operator() (const pair<Point, int>& p1, const pair<Point, int>& p2)
//	{
//		return p1.second > p2.second;
//	}
//};
//
//bool IsValid(const Point& p)
//{
//	return p.y <= M && p.y > 0 && p.x <= N && p.x > 0;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//
//	vector<vector<int>>	map(M + 1, vector<int>(N + 1));
//	vector<vector<int>>	wall(M + 1, vector<int>(N + 1, INF));
//
//	for (int i = 1; i <= M; i++)
//	{
//		string temp;
//		cin >> temp;
//
//		int j = 1;
//		for (char c : temp)
//		{
//			map[i][j++] = c - '0';
//		}
//	}
//
//	int dx[4] = { -1,1,0,0 };
//	int dy[4] = { 0,0,-1,1 };
//
//	priority_queue<pair<Point, int>, vector<pair<Point, int>>, compare> pq;
//
//	pq.push({ {1,1},0 });
//	wall[1][1] = 0;
//
//	while (!pq.empty())
//	{
//		Point cur = pq.top().first;
//		int one = pq.top().second;
//
//		pq.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			Point next = { cur.x + dx[i] , cur.y + dy[i] };
//
//			if (IsValid(next))
//			{
//				if (wall[next.y][next.x] > one + map[next.y][next.x])
//				{
//					wall[next.y][next.x] = one + map[next.y][next.x];
//					pq.push({ next, one + map[next.y][next.x] });
//				}
//			}
//
//		}
//	}
//
//	cout << wall[M][N];
//}