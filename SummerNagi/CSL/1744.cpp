#include <iostream>
#include <queue>

using namespace std;

struct cmp
{
	bool operator()(const int a, const int b)
	{
		return (a > b);
	}
};

int b1744()
{
	int N = 0;
	cin >> N;
	priority_queue<int> pque;
	priority_queue<int, vector<int>, cmp> pmque;

	for (int i = 0; i < N; ++i)
	{
		int num = 0;
		cin >> num;
		if (num > 0)
		{
			pque.push(num);
		}
		else
		{
			pmque.push(num);
		}
	}
	int answer = 0;
	while (!pque.empty())
	{
		int a = pque.top();
		pque.pop();
		if (!pque.empty())
		{
			if (a * pque.top() > a + pque.top())
			{
				a = a * pque.top();
				pque.pop();
			}
		}
		answer = answer + a;
	}
	while (!pmque.empty())
	{
		int a = pmque.top();
		pmque.pop();
		if (!pmque.empty())
		{
			if (a * pmque.top() > a + pmque.top())
			{
				a = a * pmque.top();
				pmque.pop();
			}
		}
		answer = answer + a;
	}
	cout << answer << endl;
	return (0);
}