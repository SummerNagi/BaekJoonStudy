//#include <iostream>
//#include <vector>
//
//using namespace std;
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
//	vector<vector<int>> preBuild(N + 1, vector<int>());
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
//			preBuild[i].push_back(temp);
//		}
//	}
//
//	vector<int> buildTime(N+1,0);
//
//	for (int i = 1; i <= N; i++)
//	{
//		for(int n : preBuild)
//	}
//
//}