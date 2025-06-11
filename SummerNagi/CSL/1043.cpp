//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <unordered_set>
//#include <cmath>
//
//using namespace std;
//
//int unionFind(const vector<int>& uni, int num)
//{
//	if (uni[num] == num)
//		return (num);
//	return (unionFind(uni, uni[num]));
//}
//
//int b1043()
//{
//	int N = 0;
//	int M = 0;
//	cin >> N >> M;
//
//	vector<int> uni(N + 1, 0);
//	vector<vector<int>> partys(M, vector<int>());
//	unordered_set<int> uset;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		uni[i] = i;
//	}
//
//	{
//		int P = 0;
//		cin >> P;
//
//		for (int i = 0; i < P; ++i)
//		{
//			int num = 0;
//			cin >> num;
//			uset.insert(num);
//		}
//	}
//
//	
//	for (int party = 0; party < M; ++party)
//	{
//		int P = 0;
//		int small = 80;
//		cin >> P;
//
//		for (int i = 0; i < P; ++i)
//		{
//			int num = 0;
//			cin >> num;
//			partys[party].push_back(num);
//			int a = unionFind(uni, num);
//			small = min(small, a);
//		}
//		for (int num : partys[party])
//		{
//			int a = unionFind(uni, num);
//			uni[a] = small;
//		}
//	}
//
//	int answer = M;
//	for (int party = 0; party < M; ++party)
//	{
//		for (int num : partys[party])
//		{
//			int smnum = unionFind(uni, num);
//			if (uset.find(smnum) != uset.end())
//			{
//				answer = answer - 1;
//				break ;
//			}
//		}
//	}
//
//	cout << answer << endl;
//	return (0);
//}



#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int unionFind(const vector<int>& uni, int num)
{
	if (uni[num] == num)
		return (num);
	else if (uni[num] == 0)
		return (0);
	return (unionFind(uni, uni[num]));
}

int b1043()
{
	int N = 0;
	int M = 0;
	cin >> N >> M;

	vector<int> uni(N + 1, 0);
	vector<vector<int>> partys(M, vector<int>());

	for (int i = 1; i <= N; ++i)
	{
		uni[i] = i;
	}

	{
		int P = 0;
		cin >> P;


		for (int i = 0; i < P; ++i)
		{
			int num = 0;
			cin >> num;
			uni[num] = 0;
		}
	}


	for (int party = 0; party < M; ++party)
	{
		int P = 0;
		int small = 80;
		cin >> P;

		for (int i = 0; i < P; ++i)
		{
			int num = 0;
			cin >> num;
			partys[party].push_back(num);
			int a = unionFind(uni, num);
			small = min(small, a);
		}
		for (int num : partys[party])
		{
			int a = unionFind(uni, num);
			uni[a] = small;
		}
	}

	int answer = M;
	for (int party = 0; party < M; ++party)
	{
		for (int num : partys[party])
		{
			if (unionFind(uni, num) == 0)
			{
				answer = answer - 1;
				break;
			}
		}
	}

	cout << answer << endl;
	return (0);
}