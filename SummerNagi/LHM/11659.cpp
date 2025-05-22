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
//	int n, m;
//	cin >> n >> m;
//	int S[100000] = {};
//	for (int i = 1; i <= n; i++)
//	{
//		int temp;
//		cin >> temp;
//		// ÇÕ ¹è¿­
//		S[i] = S[i-1] + temp;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int start, end;
//		cin >> start >> end;
//		cout << S[end] - S[start-1] << "\n";
//	}
//}