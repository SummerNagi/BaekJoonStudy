#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	stack<pair<int, int>> stk;

	for (int i = 1; i <= N; ++i)
	{
		int h = 0;
		cin >> h;

		while (!stk.empty() && stk.top().first < h)
		{
			stk.pop();
		}

		if (stk.empty())
		{
			cout << 0 << ' ';
		}
		else
		{
			cout << stk.top().second << ' ';
		}

		stk.push({ h, i });
	}

	return (0);
}
