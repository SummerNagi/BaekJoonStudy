//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//#define INF INT_MAX
//using namespace std;
//
//struct Node
//{
//	int city;
//	int cost;
//};
//
//struct compare
//{
//	bool operator()(const Node& a, const Node& b)
//	{
//		return a.cost > b.cost;
//	}
//};
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M, K;
//
//	cin >> N >> M >> K;
//
//	vector<vector<Node>> roads(N + 1);
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//
//		roads[a].push_back({ b,c });
//	}
//
//	vector<priority_queue<int>> distance(N + 1);
//	priority_queue<Node, vector<Node>, compare> pq;
//
//	pq.push({ 1,0 });
//	distance[1].push(0);
//
//	while (!pq.empty())
//	{
//		Node cur = pq.top();
//		pq.pop();
//
//		for (const Node& n : roads[cur.city])
//		{
//			int nextCity = n.city;
//			int nextCost = n.cost;
//
//			if (distance[nextCity].size() < K)
//			{
//				distance[nextCity].push(cur.cost + nextCost);
//				pq.push({ nextCity ,cur.cost + nextCost });
//			}
//			else if (distance[nextCity].top() > cur.cost + nextCost)
//			{
//				distance[nextCity].pop();
//				distance[nextCity].push(cur.cost + nextCost);
//				pq.push({ nextCity ,cur.cost + nextCost });
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (distance[i].size() == K)
//		{
//			cout << distance[i].top() << "\n";
//		}
//		else
//		{
//			cout << -1 << "\n";
//		}
//	}
//}