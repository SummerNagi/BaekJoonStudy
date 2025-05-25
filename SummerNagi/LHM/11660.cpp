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
//	int n, m; // 배열 크기, 질의 수
//	cin >> n >> m;
//	vector<vector<int>> arr(n + 1, vector<int>(n + 1)); // 원본 배열
//	vector<vector<int>> sum(n + 1, vector<int>(n + 1)); // 합 배열
//
//	for (int x = 1; x <= n; ++x)
//	{
//		for (int y = 1; y <= n; ++y)
//		{
//			cin >> arr[x][y];
//			
//			// 구간 합
//			sum[x][y] = sum[x][y - 1] + sum[x - 1][y] - sum[x - 1][y - 1] + arr[x][y];
//		}
//	}
//
//	cout << "================\n";
//
//	for (int x = 1; x <= n; ++x)
//	{
//		for (int y = 1; y <= n; ++y)
//		{
//			cout << sum[x][y] << " ";
//		}
//		cout << "\n";
//	}
//
//	cout << "================";
//
//	for (int i = 0; i < m; ++i)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		int result = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
//		cout << result << "\n";
//	}
//
//	return 0;
//}