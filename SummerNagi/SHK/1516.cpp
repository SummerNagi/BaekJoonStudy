//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//
//using namespace std;
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
//	vector<int> build(N + 1);
//	vector<vector<int>> postBuild(N + 1, vector<int>());
//	vector<int> indegree(N + 1, 0);
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> build[i];
//
//		while (1)
//		{
//			int temp;
//			cin >> temp;
//
//			if (temp == -1)
//			{
//				break;
//			}
//
//			postBuild[temp].push_back(i);
//			indegree[i]++;
//		}
//	}
//
//	vector<int> tech(N + 1, 0);
//	queue<int> q;
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (indegree[i] == 0)
//		{
//			q.push(i);
//		}
//	}
//
//	int priority = 0;
//
//	while (!q.empty())
//	{
//		int cur = q.front();
//
//		q.pop();
//
//		for (int n : postBuild[cur])
//		{
//			indegree[n]--;
//
//			tech[n] = max(tech[n], tech[cur] + build[cur]);
//
//			if (indegree[n] == 0)
//			{
//				q.push(n);
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << tech[i] + build[i] << "\n";
//	}
//}