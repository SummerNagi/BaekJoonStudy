#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct cmp
{
	bool operator()(const pair<int, int>& a, const pair<int, int>& b)
	{
		return (a.first > b.first);
	}
};

int b19352()
{
	int N = 0;
	int M = 0;
	int K = 0;
	int X = 0;
	cin >> N >> M >> K >> X;

	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pque;
	vector<int> lst(N, -1);
	vector<vector<int>> vec(N, vector<int>());
	vector<bool> comp(N, false);
	vector<int> answer;
	for (int i = 0; i < M; ++i)
	{
		int A = 0;
		int B = 0;
		cin >> A >> B;
		vec[A - 1].push_back(B - 1);
	}

	pque.push(make_pair(0, X - 1));

	comp[X - 1] = true;
	while (!pque.empty())
	{
		int round =pque.size();

		for (int i = 0; i < round; ++i)
		{
			int next = pque.top().first;
			int num = pque.top().second;
			pque.pop();
			if (next == K)
			{
				answer.push_back(num);
			}
			else
			{
				for (int v : vec[num])
				{
					if (comp[v] == false)
					{
						pque.push(make_pair(next + 1, v));
						comp[v] = true;
					}
				}
			}
		}
	}
	if (answer.size() == 0)
	{
		cout << -1 << endl;
		return (0);
	}

	sort(answer.begin(), answer.end());

	for (int v : answer)
	{
		cout << v + 1 << endl;
	}
	return (0);
}