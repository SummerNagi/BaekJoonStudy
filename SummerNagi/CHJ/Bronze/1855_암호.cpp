#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; string s;
	cin >> n >> s;

	int m = s.size() / n;
	vector<vector<char>> a(m, vector<char>(n));

	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				a[i][j] = s[cnt];
				cnt++;
			}
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
			{
				a[i][j] = s[cnt];
				cnt++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << a[j][i];

	return 0;
}