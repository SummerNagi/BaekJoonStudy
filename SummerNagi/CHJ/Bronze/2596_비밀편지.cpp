#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string codes[8] = { "000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010" };

int decoding(string s, int num)
{
	int cnt = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != codes[num][i])
			cnt++;
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; string s;
	cin >> n >> s;

	string ans;
	for (int i = 0; i < n; i++)
	{
		string tmp = s.substr(i * 6, 6);
		bool isFound = false;

		for (int j = 0; j < 8; j++)
		{
			if (decoding(tmp, j) < 2)
			{
				isFound = true;
				ans += 'A' + j;
				break;
			}
		}

		if (!isFound)
		{
			cout << i + 1;
			return 0;
		}
	}

	cout << ans;
	return 0;
}