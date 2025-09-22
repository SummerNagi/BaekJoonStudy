// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <climits>
// 
// #define INF INT_MAX
// 
// using namespace std;
// 
// // ��� ������ ���� ����ü
// struct Node
// {
// 	int city;
// 	int cost;
// };
// 
// // �켱���� ť�� ���� �� ������
// struct Compare
// {
// 	bool operator()(const Node& a, const Node& b)
// 	{
// 		return a.cost > b.cost;
// 	}
// };
// 
// // ���ͽ�Ʈ�� �˰��� �Լ�
// vector<int> dijkstra(int start, int N, const vector<vector<pair<int, int>>>& graph)
// {
// 	vector<int> dist(N + 1, INF);
// 	priority_queue<Node, vector<Node>, Compare> pq;
// 
// 	dist[start] = 0;
// 	pq.push({ start, 0 });
// 
// 	while (!pq.empty())
// 	{
// 		Node currentNode = pq.top();
// 		pq.pop();
// 
// 		int currentCity = currentNode.city;
// 		int currentCost = currentNode.cost;
// 
// 		if (dist[currentCity] < currentCost)
// 		{
// 			continue;
// 		}
// 
// 		for (const auto& nextNode : graph[currentCity])
// 		{
// 			int nextCity = nextNode.first;
// 			int nextCost = nextNode.second;
// 
// 			if (dist[nextCity] > dist[currentCity] + nextCost)
// 			{
// 				dist[nextCity] = dist[currentCity] + nextCost;
// 				pq.push({ nextCity, dist[nextCity] });
// 			}
// 		}
// 	}
// 
// 	return dist;
// }
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N, M, K;
// 	cin >> N >> M >> K;
// 
// 	vector<vector<pair<int, int>>> costs(N + 1);
// 	vector<vector<pair<int, int>>> reverseCosts(N + 1);
// 
// 	for (int i = 0; i < M; i++)
// 	{
// 		int a, b, c;
// 		cin >> a >> b >> c;
// 
// 		costs[a].push_back({ b, c });
// 		reverseCosts[b].push_back({ a, c }); // ������ �׷��� ����
// 	}
// 
// 	// K���� �� ���÷� ���� �ִ� �Ÿ� ���
// 	vector<int> KtoI = dijkstra(K, N, costs);
// 
// 	// �� ���ÿ��� K�� ���� �ִ� �Ÿ� ��� (������ �׷��� Ȱ��)
// 	vector<int> ItoK = dijkstra(K, N, reverseCosts);
// 
// 	int maxTime = INT_MIN;
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		if (i == K)
// 		{
// 			continue;
// 		}
// 
// 		if (KtoI[i] != INF && ItoK[i] != INF)
// 		{
// 			maxTime = max(maxTime, KtoI[i] + ItoK[i]);
// 		}
// 	}
// 
// 	cout << maxTime;
// }