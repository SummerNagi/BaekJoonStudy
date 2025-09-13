// #include <queue>
// #include <vector>
// 
// using namespace std;
// 
// bool arr[101][101] = { false };
// 
// 
// int bfs(int N)
// {
// 	// i 번째 사람의 kevin bacon 수 계산
// 	int minKBCount = 2147483647;
// 	int minUser = 0;
// 
// 	for (int i = 1; i <= N; i++)
// 	{
// 		int kbCount = 0;
// 
// 		// i 번째 사람과 j번째 사람의 단계 구하기
// 		for (int j = 1; j <= N; j++)
// 		{
// 			queue<pair<int, int>> q;
// 
// 			if (j == i)
// 			{
// 				continue;
// 			}
// 
// 			int depth = 0;
// 			bool visited[101] = { false };
// 
// 			q.push(make_pair(i, depth));
// 			visited[i] = true;
// 
// 			while (!q.empty())
// 			{
// 				int cur = q.front().first;
// 				int curDepth = q.front().second;
// 
// 				if (cur == j)
// 				{
// 					kbCount += curDepth;
// 					break;
// 				}
// 
// 				q.pop();
// 
// 				for (int k = 1; k <= N; k++)
// 				{
// 					if (arr[cur][k] == true && visited[k] != true)
// 					{
// 						q.push(make_pair(k, curDepth + 1));
// 						visited[k] = true;
// 					} 
// 				}
// 			}
// 		}
// 
// 		if (kbCount < minKBCount)
// 		{
// 			minKBCount = kbCount;
// 			minUser = i;
// 		}
// 	}
// 	return minUser;
// }
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N, M;
// 
// 	cin >> N >> M;
// 
// 	int a, b;
// 
// 	for (int i = 0; i < M; i++)
// 	{
// 		cin >> a >> b;
// 		arr[a][b] = true;
// 		arr[b][a] = true;
// 	}
// 
// 	cout << bfs(N);
// }
// 

//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
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
//	vector<vector<int>> friends(N + 1, vector<int>(N + 1, INT_MAX));
//	vector<int> kbNum(N + 1, 0);
//
//	kbNum[0] = INT_MAX;
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//
//		friends[a][b] = 1;
//		friends[b][a] = 1;
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		friends[1][1] = 0;
//	}
//
//	for (int k = 1; k <= N; k++)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				if (friends[i][k] != INT_MAX && friends[k][j] != INT_MAX)
//				{
//					friends[i][j] = min(friends[i][j], friends[i][k] + friends[k][j]);
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if (friends[i][j] != INT_MAX && i != j)
//			{
//				kbNum[i] += friends[i][j];
//			}
//		}
//	}
//
//	cout << min_element(kbNum.begin(), kbNum.end()) - kbNum.begin();
//}