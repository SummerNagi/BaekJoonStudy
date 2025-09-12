//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//#include <tuple>
//#include <algorithm>
//
//#define INF LLONG_MAX
//#define mINF LLONG_MIN
//
//#define ll long long
//
//using namespace std;
//
//typedef tuple<int, int, int> edge;
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int N, s, a, M;
//	cin >> N >> s >> a >> M;
//
//	vector<edge> edges;
//	vector<ll> benefit(N);
//
//	for (int i = 1; i <= M; i++)
//	{
//		int A, B, C;
//		cin >> A >> B >> C;
//
//		edges.push_back(make_tuple(A, B, C));
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> benefit[i];
//	}
//
//	sort(edges.begin(), edges.end());
//
//	vector<ll> D(N, mINF);
//
//	D[s] = benefit[s];
//
//	for (int i = 0; i <= N + 50; i++)
//	{
//		for (auto t : edges)
//		{
//			int start = get<0>(t);
//			int e = get<1>(t);
//			int c = get<2>(t);
//
//			int use = benefit[e] - c;
//
//			if (D[start] != mINF)
//			{
//				if (D[start] == INF)
//				{
//					D[e] = INF;
//				}
//				else if (D[e] < D[start] + use)
//				{
//					D[e] = D[start] + use;
//
//					if (i >= N - 1)
//					{
//						D[e] = INF;
//					}
//				}
//			}
//		}
//	}
//
//	if (D[a] == mINF)
//	{
//		cout << "gg";
//		return 0;
//	}
//
//	if (D[a] == INF)
//	{
//		cout << "Gee";
//		return 0;
//	}
//
//	cout << D[a];
//
//}