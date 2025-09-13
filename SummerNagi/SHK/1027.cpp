//#include <iostream>
//#include <vector>
//#include <climits>
//#define INF INT_MAX
//
//using namespace std;
//
//
//
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
//	vector<double> building(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> building[i];
//	}
//
//	vector<int> count(N, 0);
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//
//			double inclination = (building[j] - building[i]) / (j - i);
//			double intercept = building[i] - inclination * i;
//
//			bool canLook = true;
//
//			if (j > i)
//			{
//				if (i + 1 == j)
//				{
//					count[i]++;
//					continue;
//				}
//
//				for (int k = i + 1; k < j; k++)
//				{
//					if (inclination * k + intercept <= building[k])
//					{
//						canLook = false;
//						break;
//					}
//				}
//			}
//			else
//			{
//				if (i == j + 1)
//				{
//					count[i]++;
//					continue;
//				}
//				for (int k = j + 1; k < i; k++)
//				{
//					if (inclination * k + intercept <= building[k])
//					{
//						canLook = false;
//						break;
//					}
//				}
//			}
//
//			if (canLook)
//			{
//				count[i]++;
//			}
//		}
//	}
//
//	cout << *max_element(count.begin(), count.end());
//}