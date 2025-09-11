//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct roadInfo
//{
//	int a;
//	int t;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//	int M;
//	cin >> M;
//
//	vector<vector<roadInfo>> road(N + 1, vector<roadInfo>());
//	vector<vector<roadInfo>> revRoad(N + 1, vector<roadInfo>());
//	vector<int> indegree(N + 1, 0);
//
//	for (int i = 1; i <= M; i++)
//	{
//		int s, a, t;
//
//		cin >> s >> a >> t;
//
//		road[s].push_back({ a,t });
//		revRoad[a].push_back({ s,t });
//		indegree[a]++;
//	}
//
//	int s, e;
//	cin >> s >> e;
//
//	vector<int> arriveTime(N + 1, 0);
//	queue<int> q;
//
//	q.push(s);
//
//
//	while (!q.empty())
//	{
//		int cur = q.front();
//
//		q.pop();
//
//		for (roadInfo ri : road[cur])
//		{
//			int time = ri.t;
//			int next = ri.a;
//
//			indegree[next]--;
//
//			arriveTime[next] = max(arriveTime[next], arriveTime[cur] + time);
//
//			if (indegree[next] == 0)
//			{
//				q.push(next);
//			}
//		}
//	}
//
//	cout << arriveTime[e] << endl;
//
//	q.push(e);
//
//	int noRestRoad = 0;
//	vector<bool> visitied(N + 1, false);
//	while (!q.empty())
//	{
//		int cur = q.front();
//
//		q.pop();
//
//		for (roadInfo ri : revRoad[cur])
//		{
//			int time = ri.t;
//			int next = ri.a;
//
//			if (arriveTime[cur] == arriveTime[next] + time)
//			{
//				cout << cur << "->" << next << "\n";
//				noRestRoad++;
//
//				if (!visitied[next])
//				{
//					visitied[next] = true;
//					q.push(next);
//				}
//			}
//		}
//	}
//
//	cout << noRestRoad << endl;
//}