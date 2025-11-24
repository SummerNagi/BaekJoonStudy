#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int size = 4 * n - 3;

	vector<vector<char>> map(size, vector<char>(size, ' '));

	int start = 0;
	int end = 4 * n - 4;

	for (int i = 0; i < n; i++)
	{
		for (int j = start; j <= end; j++)
		{
			map[start][j] = '*';

			map[j][start] = '*';

			map[j][end] = '*';

			map[end][j] = '*';
		}
		start += 2;
		end -= 2;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << map[i][j];

		cout << '\n';
	}

	return 0;
}
