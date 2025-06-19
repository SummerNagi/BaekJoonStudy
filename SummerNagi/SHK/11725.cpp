// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_map>
// 
// 
// using namespace std;
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N;
// 	cin >> N;
// 
// 	vector<vector<int>> edges(N + 1, vector<int>());
// 
// 	for (int i = 1; i <= N - 1; i++)
// 	{
// 		int a, b;
// 
// 		cin >> a >> b;
// 
// 		
// 		edges[a].push_back(b);
// 		edges[b].push_back(a);
// 	}
// 
// 	unordered_map<int, int> nodeInfo;
// 	queue<int> q;
// 
// 	bool visited[100001] = { false };
// 
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		if (!visited[i])
// 		{
// 			q.push(i);
// 
// 			visited[i] = true;
// 
// 			while (!q.empty())
// 			{
// 				int node = q.front();
// 
// 				q.pop();
// 
// 				// node�� ����� �ٸ� ��尡 ����ִ� �迭�� �����ͼ�
// 				vector<int> cur = edges[node];
// 
// 				// �ϳ� �� ����
// 				for (auto num : cur)
// 				{
// 					// n = ����Ǿ��ִ� ���
// 					// n�� �θ� ������ node�� �ڽ����� ����
// 					// ������ node�� �ڽ����� ����
// 
// 					// ������
// 					if (nodeInfo.find(num) != nodeInfo.end())
// 					{
// 						nodeInfo[node] = num;
// 					}
// 					else
// 					{
// 						nodeInfo[num] = node;
// 					}
// 
// 					if (!visited[num])
// 					{
// 						q.push(num);
// 						visited[num] = true;
// 					}
// 				}
// 			}
// 		}
// 	}
// 
// 
// 	for (int i = 2; i <= N; i++)
// 	{
// 		cout << nodeInfo[i] << '\n';
// 	}
// }