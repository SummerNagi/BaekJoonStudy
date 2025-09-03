//#include <iostream>
//#include <vector>
//#include <set>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int A[4000];
//int B[4000];
//int C[4000];
//int D[4000];
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
//	set<int> AB;
//	set<int> CD;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i] >> B[i] >> C[i] >> D[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			AB.insert(A[i] + B[j]);
//
//			CD.insert(C[i] + D[j]);
//		}
//	}
//
//	vector<int> vCD(CD.begin(), CD.end());
//	vector<int> vAB(AB.begin(), AB.end());
//
//	int s = 0, e = vCD.size() - 1;
//	int answer = 0;
//
//
//	for (int i = 0; i < vCD.size(); i++)
//	{
//		int s = 0, e = vAB.size() - 1;
//		int cur = vCD[i];
//		while (s <= e)
//		{
//			int mid = (s + e) / 2;
//			int sum = cur + vAB[mid];
//			if (sum > 0)
//			{
//				e = mid - 1;
//			}
//			else if (sum < 0)
//			{
//				s = mid + 1;
//			}
//			else
//			{
//				answer++;
//				break;
//			}
//		}
//	}
//
//	cout << answer;
//}