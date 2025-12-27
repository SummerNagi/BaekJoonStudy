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

	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;

		vector<vector<int>> grid(n, vector<int>(m, 0));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> grid[i][j];

		int ans = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = n - 2; j >= 0; j--)
			{
				int cnt = 0;
				if (grid[j][i] == 1)
				{
					for (int k = j + 1; k < n; k++)
					{
						if (grid[k][i] == 1)
							break;

						cnt++;
					}
					ans += cnt;
					swap(grid[j + cnt][i], grid[j][i]);
				}
			}
		}

		cout << ans << '\n';
	}
	return 0;
}