//#include <iostream>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//bool check[1001][1001] = { false };
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> indegree(N + 1, 0);
//	vector<vector<int>> adj(N + 1);
//
//
//	for (int i = 0; i < M; i++)
//	{
//		int K;
//		cin >> K;
//
//		vector<int> temp(K);
//
//		for (int j = 0; j < K; j++)
//		{
//			cin >> temp[j];
//		}
//
//		int id = 0;
//
//		if (K == 1)
//		{
//			continue;
//		}
//
//		for (int j = 0; j < K - 1; j++)
//		{
//			adj[temp[j]].push_back(temp[j + 1]);
//			indegree[temp[j + 1]]++;
//		}
//	}
//
//	priority_queue<int> q;
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (indegree[i] == 0)
//		{
//			q.push(i);
//		}
//	}
//
//	vector<int> sorted;
//
//	while (!q.empty())
//	{
//		int cur = q.top();
//
//		q.pop();
//
//		sorted.push_back(cur);
//
//		for (int n : adj[cur])
//		{
//			indegree[n]--;
//
//			if (indegree[n] == 0)
//			{
//				q.push(n);
//			}
//		}
//	}
//
//	if (sorted.size() != N)
//	{
//		cout << 0;
//	}
//	else
//	{
//		for (int n : sorted)
//		{
//			cout << n << "\n";
//		}
//	}
//}
//
//
