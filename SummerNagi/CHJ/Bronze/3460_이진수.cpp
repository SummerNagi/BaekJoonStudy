#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;


	while (t--)
	{
		int n;
		cin >> n;

		queue<int> st;

		while (n != 0)
		{
			if (n % 2 == 1)
				st.push(1);
			else
				st.push(0);

			n /= 2;
		}

		int cnt = 0;
		while (!st.empty())
		{
			if (st.front() != 0)
				cout << st.front() * cnt << ' ';

			st.pop();
			cnt++;
		}
		cout << '\n';
	}


	return 0;
}
