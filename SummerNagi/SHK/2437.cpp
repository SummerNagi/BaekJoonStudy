//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	vector<int> weight(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> weight[i];
//	}
//
//	sort(weight.begin(), weight.end());
//
//	unsigned long long sum = 0;
//	unsigned long long answer = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int w = weight[i];
//
//		if (w <= sum + 1)
//		{
//			sum += w;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	cout << sum+1;
//}