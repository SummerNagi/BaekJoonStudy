#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	vector<vector<bool>> vec(26, vector<bool>(26, false));


	for (int i = 0; i < n; ++i)
	{
		char x, y;
		string s = "";
		cin >> x >> s >> y;

		vec[x - 'a'][y - 'a'] = true;
	}

	for (int slf = 0; slf < 26; ++slf)
	{
		vec[slf][slf] = true;
	}

	for (int cross = 0; cross < 26; ++cross)
	{
		for (int start = 0; start < 26; ++start)
		{
			for (int end = 0; end < 26; ++end)
			{
				if (vec[start][end] || (vec[start][cross] && vec[cross][end]))
				{
					vec[start][end] = true;
				}
			}
		}
	}

	int k = 0;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		char x, y;
		string s = "";
		cin >> x >> s >> y;

		if (vec[x - 'a'][y - 'a'] == true)
		{
			cout << 'T' << '\n';
		}
		else
		{
			cout << 'F' << '\n';
		}
	}

	return (0);
}
