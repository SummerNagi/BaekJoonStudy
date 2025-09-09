<<<<<<< Updated upstream
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
=======
// #include <iostream>
// #include <vector>
// #include <set>
// #include <cmath>
// #include <algorithm>
// 
// using namespace std;
// #define ll long long
// 
// ll A[4000];
// ll B[4000];
// ll C[4000];
// ll D[4000];
// 
// 
// 
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	cout.tie(NULL);
// 
// 	int N;
// 	cin >> N;
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		cin >> A[i] >> B[i] >> C[i] >> D[i];
// 	}
// 
// 
// 	vector<ll> vCD;
// 	vector<ll> vAB;
// 
// 
// 	for (int i = 0; i < N; i++)
// 	{
// 		for (int j = 0; j < N; j++)
// 		{
// 			vAB.push_back(A[i] + B[j]);
// 
// 			vCD.push_back(C[i] + D[j]);
// 		}
// 	}
// 
// 	sort(vAB.begin(), vAB.end());
// 	sort(vCD.begin(), vCD.end());
// 
// 	ll count = 0;
// 	int left = 0;
// 	int right = vCD.size() - 1;
// 
// 	while (left < vAB.size() && right >= 0)
// 	{
// 		ll sum = vAB[left] + vCD[right];
// 
// 		ll abCount = 0;
// 		ll cdCount = 0;
// 
// 		if (sum == 0)
// 		{
// 			ll abCur = vAB[left];
// 			ll cdCur = vCD[right];
// 
// 			while (vAB[left] == abCur)
// 			{
// 				abCount++;
// 				left++;
// 			}
// 			while (vCD[right] == cdCur)
// 			{
// 				cdCount++;
// 				right--;
// 			}
// 
// 			count += (abCount * cdCount);
// 		}
// 		else if (sum < 0)
// 		{
// 			left++;
// 		}
// 		else
// 		{
// 			right--;
// 		}
// 
// 
// 
// 	}
// 	cout << count;
// }
>>>>>>> Stashed changes
