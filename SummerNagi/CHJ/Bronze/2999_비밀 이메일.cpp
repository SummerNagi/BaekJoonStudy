#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int r = 0;
	for (int i=1; i<=s.size(); i++)
	{
		int tmpc = s.size() / i;

		if (i <= tmpc && s.size() % i == 0)
			r = i;
	}

	int c = s.size() / r;

	vector<vector<char>> matrix(r, vector<char>(c));
	int cnt = 0;
	for (int i=0; i<c; i++)
	{
		for (int j=0; j<r; j++)
		{
			matrix[j][i] = s[cnt];
			cnt++;
		}
	}

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cout << matrix[i][j];

	return 0;
}