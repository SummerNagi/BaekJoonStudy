#include <deque>
#include <iostream>
using namespace std;

int dp[1001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	deque<int> dq;

	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	int ans = 0;

	for (int i = 0; i < m; i++)
	{
		int x, idx = 0;
		cin >> x;

		for (int i = 0; i < dq.size(); i++)
		{
			if (dq[i] == x)
				idx = i;
		}

		while (dq.front() != x)
		{
			if (dq.size() - idx <= dq.size() / 2)
			{
				int temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
			}
			else
			{
				int temp = dq.front();
				dq.pop_front();
				dq.push_back(temp);
			}
			ans++;
		}
		dq.pop_front();
	}

	cout << ans;
	return 0;
}