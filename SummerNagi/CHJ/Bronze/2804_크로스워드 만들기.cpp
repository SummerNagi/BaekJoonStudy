#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	int x, y;
	bool find = false;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == b[j])
			{
				x = i;
				y = j;
				find = true;
				break;
			}
		}

		if (find)
			break;
	}

	vector<vector<char>> puzzle(b.size(), vector<char>(a.size(), '.'));

	for (int i = 0; i < b.size(); i++)
		puzzle[i][x] = b[i];

	for (int i = 0; i < a.size(); i++)
		puzzle[y][i] = a[i];

	for (int i = 0; i < b.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
			cout << puzzle[i][j];

		cout << '\n';
	}

	return 0;
}
