#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	int cows[11];
	fill_n(cows, 11, 101);

	int cnt = 0;
	while (t--)
	{
		int n, m;
		cin >> n >> m;

		if (cows[n] == 101)
			cows[n] = m;
		else
		{
			if (cows[n] != m)
			{
				cnt++;
				cows[n] = m;
			}
		}
	}

	cout << cnt;
	return 0;
}
