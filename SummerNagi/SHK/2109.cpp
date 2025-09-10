//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//bool Pred(const pair<int, int>& p1, const pair<int, int>& p2)
//{
//	return p1.first > p2.first;
//}
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
//	vector<pair<int, int>> talk(N);
//
//	int lastDay = -1;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> talk[i].second >> talk[i].first;
//
//		if (lastDay < talk[i].first)
//		{
//			lastDay = talk[i].first;
//		}
//	}
//
//	sort(talk.begin(), talk.end(), Pred);
//
//	int idx = 0;
//
//	priority_queue<int> pq;
//
//	int answer = 0;
//
//	for (int i = lastDay; i >= 1; i--)
//	{
//		while (idx < N && i <= talk[idx].first)
//		{
//			pq.push(talk[idx].second);
//			idx++;
//		}
//
//		if (!pq.empty())
//		{
//			answer += pq.top();
//			pq.pop();
//		}
//	}
//
//	cout << answer;
//}