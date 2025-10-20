//#include <iostream>
//#include <vector>
//#include <cmath>
//
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	long long k = ceil((double)log(N) / log(2));
//
//	vector<long long> st((double)pow(2, k + 1), 0);
//
//	long long base = pow(2, k);
//	long long end = base + N - 1;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> st[base + i];
//	}
//
//	int i = (int)pow(2, k + 1) - 1;
//
//	while (i != 1)
//	{
//		st[i / 2] += st[i];
//		i--;
//	}
//
//
//	while (Q--)
//	{
//		int x, y, a, b;
//		cin >> x >> y >> a >> b;
//
//		int L = min(x, y);
//		int R = max(x, y);
//
//
//		long long start = base + L - 1;
//		long long end = base + R - 1;
//
//		long long result = 0;
//
//		while (start <= end)
//		{
//			if (start % 2 == 1)
//			{
//				result += st[start];
//			}
//
//			if (end % 2 == 0)
//			{
//				result += st[end];
//			}
//
//			start = (start + 1) / 2;
//			end = (end - 1) / 2;
//		}
//
//		cout << result << "\n";
//
//		long long target = base + a - 1;
//		long long origin = st[target];
//		long long delta = b - origin;
//
//		st[target] = b;
//
//		while (target != 1)
//		{
//			st[target / 2] += delta;
//			target /= 2;
//		}
//	}
//
//}