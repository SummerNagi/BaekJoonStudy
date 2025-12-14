#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<char>> a(n, vector<char>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	int rcnt = 0;
	for (int i = 0; i < n; i++)
	{
		bool guard = false;

		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 'X')
				guard = true;
		}

		if (!guard)
			rcnt++;
	}

	int ccnt = 0;
	for (int j = 0; j < m; j++)
	{
		bool guard = false;
		for (int i = 0; i < n; i++)
		{
			if (a[i][j] == 'X')
				guard = true;
		}

		if (!guard)
			ccnt++;
	}

	cout << max(rcnt, ccnt);

	return 0;
}
