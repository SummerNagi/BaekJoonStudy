//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//#include <tuple>
//
//#define INF INT_MAX
//
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int N, M;
//	cin >> N >> M;
//
//	vector<tuple<int, int, int>> buses;
//
//	for (int i = 0; i < M; i++)
//	{
//		int A, B, C;
//		cin >> A >> B >> C;
//
//		buses.push_back(make_tuple(A, B, C));
//	}
//
//	vector<long long> D(N + 1, LLONG_MAX);
//
//	D[1] = 0;
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (auto t : buses)
//		{
//			long long s = get<0>(t);
//			long long e = get<1>(t);
//			long long c = get<2>(t);
//
//			if (D[s] != LLONG_MAX)
//			{
//				D[e] = min(D[e], D[s] + c);
//			}
//		}
//	}
//
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (auto t : buses)
//		{
//			long long s = get<0>(t);
//			long long e = get<1>(t);
//			long long c = get<2>(t);
//
//			if (D[s] != LLONG_MAX)
//			{
//				if (D[e] > D[s] + c)
//				{
//					cout << -1;
//					return 0;
//				}
//			}
//		}
//	}
//
//
//
//
//	for (int i = 2; i <= N; i++)
//	{
//		long long n = D[i];
//
//		if (n == LLONG_MAX)
//		{
//			cout << -1 << "\n";
//		}
//		else
//		{
//			cout << n << "\n";
//		}
//	}
//}