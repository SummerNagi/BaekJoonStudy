//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//	vector<double> scores(n);
//	double max = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> scores[i];
//		if (max < scores[i])
//		{
//			max = scores[i];
//		}
//	}
//
//	double sum = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		scores[i] = (scores[i] / max) * 100;
//		sum += scores[i];
//	}
//
//	cout << sum / n;
//}