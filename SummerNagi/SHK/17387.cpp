//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//struct Point
//{
//	double x, y;
//};
//
//struct Segment
//{
//	Point A, B;
//
//	double operator*(const Point& p)
//	{
//		double result = (A.x * B.y + B.x * p.y + p.x * A.y) - (B.x * A.y + p.x * B.y + A.x * p.y);
//
//		if (result < 0)
//		{
//			return -1;
//		}
//		else if (result > 0)
//		{
//			return 1;
//		}
//
//		return result;
//	}
//
//	bool equation(double x, double y)
//	{
//		int minY, maxY;
//		int minX, maxX;
//
//		minY = min(A.y, B.y);
//		maxY = max(A.y, B.y);
//
//		minX = min(A.x, B.x);
//		maxX = max(A.x, B.x);
//
//		if (A.y - B.y == 0)
//		{
//			return (y == A.y) && (x >= minX && x <= maxX);
//
//		}
//		else if (A.x - B.x == 0)
//		{
//			return (x == A.x) && (y >= minY && y <= maxY);
//		}
//		else
//		{
//			double delta = (A.y - B.y) / (A.x - B.x);
//
//			if (x >= minX && maxX >= x && y >= minY && y <= maxY)
//			{
//				const double EPSILON = 1e-9;
//				return abs(delta * (x - A.x) - (y - A.y)) < EPSILON;
//			}
//
//			return false;
//		}
//	}
//
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	Segment AB, CD;
//
//	cin >> AB.A.x >> AB.A.y >> AB.B.x >> AB.B.y;
//	cin >> CD.A.x >> CD.A.y >> CD.B.x >> CD.B.y;
//
//	// C,D�� �ϳ��� AB ���� �ִٸ� ����
//	if (AB.equation(CD.A.x, CD.A.y) || AB.equation(CD.B.x, CD.B.y))
//	{
//		cout << 1;
//		return 0;
//	}
//
//
//	// A,B�� �ϳ��� CD ���� �ִٸ� ����
//	if (CD.equation(AB.A.x, AB.A.y) || CD.equation(AB.B.x, AB.B.y))
//	{
//		cout << 1;
//		return 0;
//	}
//
//	// AB�� ���ؼ� C,D�� ���� �����ʿ� �����鼭 CD�� ���ؼ� A,B�� ���� �����ʿ� ������ ����
//
//	int ABC = AB * CD.A;
//	int ABD = AB * CD.B;
//
//	int CDA = CD * AB.A;
//	int CDB = CD * AB.B;
//
//	if (ABC == 0 || ABD == 0 || CDA == 0 || CDB == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	// CD ��/�޿� A,B�� ���� ��
//	if ((CDA > 0 && CDB < 0) || (CDA < 0 && CDB >0))
//	{
//		// C,D �� AB�� ����/�����ʿ� �ִٸ� ����
//		if ((ABC > 0 && ABD < 0) || (ABC < 0 && ABD > 0))
//		{
//			cout << 1;
//			return 0;
//		}
//	}
//
//	// AB ��/�޿� C,D�� ���� ��
//	if ((ABC > 0 && ABD < 0) || (ABC < 0 && ABD > 0))
//	{
//		// A,B �� CD�� ����/�����ʿ� �ִٸ� ����
//		if ((CDA > 0 && CDB < 0) || (CDA < 0 && CDB >0))
//		{
//			cout << 1;
//			return 0;
//		}
//	}
//
//	cout << 0;
//
//}