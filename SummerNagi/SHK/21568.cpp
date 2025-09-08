//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//
//int GCD(int a, int b)
//{
//	if (a % b == 0)
//	{
//		return b;
//	}
//	return GCD(b, a % b);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int q, r1, r2, r, x1, x2, x, y1, y2, y;
//	int A, B, C;
//
//	cin >> A >> B >> C;
//
//	if (C % GCD(A, B) != 0)
//	{
//		cout << -1;
//		return 0;
//	}
//
//	x1 = 1; x2 = 0;
//	y1 = 0; y2 = 1;
//
//	r1 = A; r2 = B;
//	while (true)
//	{
//		q = r1 / r2;
//		r = r1 - r2 * q;
//		x = x1 - x2 * q;
//		y = y1 - y2 * q;
//
//		if (r == 0)
//		{
//			cout << x2 * C / r2 << " " << y2 * C / r2;
//			break;
//		}
//
//		r1 = r2;
//		r2 = r;
//		x1 = x2;
//		x2 = x;
//		y1 = y2;
//		y2 = y;
//	}
//}