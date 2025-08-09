// #include <iostream>
// #include <vector>
// #include <queue>
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
// struct compare 
// {
// 	bool operator()(const Node& a, const Node& b) 
// 	{
// 		return a.cost > b.cost;
// 	}
// };
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N, M;
// 	cin >> N;
// 	cin >> M;
// 
// 	vector<vector<pair<int, int>>> costs(N + 1);
// 
// 	// 1. ���� �׷��� ����
// 	for (int i = 0; i < M; i++)
// 	{
// 		int a, b, c;
// 		cin >> a >> b >> c;
// 		costs[a].push_back({ b, c });
// 	}
// 
// 	int s, e;
// 	cin >> s >> e;
// 
// 	// 2. �ִ� �Ÿ� �迭 �ʱ�ȭ
// 	vector<int> mDistance(N + 1, INF);
// 
// 	priority_queue<Node, vector<Node>, compare> pq;
// 
// 	mDistance[s] = 0;
// 	pq.push({ s, 0 });
// 
// 	// 3. �ִ� �Ÿ� �迭 ������Ʈ
// 	while (!pq.empty())
// 	{
// 		Node currentNode = pq.top();
// 		pq.pop();
// 
// 		int currentCity = currentNode.city;
// 		int currentCost = currentNode.cost;
// 
// 		// �̹� �� ª�� ��θ� ã�Ҵٸ� �ǳʶٱ�
// 		if (mDistance[currentCity] < currentCost)
// 		{
// 			continue;
// 		}
// 
// 		for (const auto& nextNode : costs[currentCity])
// 		{
// 			int nextCity = nextNode.first;
// 			int nextCost = nextNode.second;
// 
// 			// ���� ���ø� ���� ���� ���÷� ���� ����� �� �����ϴٸ� ������Ʈ
// 			if (mDistance[nextCity] > mDistance[currentCity] + nextCost)
// 			{
// 				mDistance[nextCity] = mDistance[currentCity] + nextCost;
// 				pq.push({ nextCity, mDistance[nextCity] });
// 			}
// 		}
// 	}
// 
// 	cout << mDistance[e];
// 
// 	return 0;
// }