#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int a1715()
{

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;

	priority_queue<int, vector<int>, greater<int>>pq;

	int data;

	for (int i = 0; i < N; i++)
	{
		cin >> data;
		pq.push(data);
	}

	int data1 = 0;
	int data2 = 0;

	int sum = 0;

	while (pq.size() != 1)
	{
		data1 = pq.top();
		pq.pop();
		data2 = pq.top();
		pq.pop();

		sum += data1 + data2;
		pq.push(data1 + data2);

	}

	cout << sum << "\n";
}