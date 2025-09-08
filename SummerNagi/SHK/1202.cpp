//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//bool Pred(const pair<int, int>& p1, const pair<int, int>& p2)
//{
//	if (p1.first == p2.first)
//	{
//		return p1.second < p2.second;
//	}
//
//	return p1.first < p2.first;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, K;
//	cin >> N >> K;
//
//	// {���� ,��ġ}
//	vector<pair<int, int>> jewel(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> jewel[i].first >> jewel[i].second;
//	}
//
//	vector<int> volume(K);
//
//	for (int i = 0; i < K; i++)
//	{
//		cin >> volume[i];
//	}
//
//	sort(jewel.begin(), jewel.end());
//	sort(volume.begin(), volume.end());
//
//	unsigned long long answer = 0;
//	priority_queue<int> pq;
//	int jewelIdx = 0;
//
//	// ������ ��ġ�� ���� ū ���� ���� �� �ִ� ���� �� ���� �뷮�� ���� ���濡 ���� ����
//	for (int i = 0; i < K; i++)
//	{
//		while (jewelIdx < N && jewel[jewelIdx].first <= volume[i])
//		{
//			pq.push(jewel[jewelIdx].second);
//			jewelIdx++;
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
