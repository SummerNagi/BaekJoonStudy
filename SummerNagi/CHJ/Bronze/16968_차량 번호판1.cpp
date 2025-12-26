#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int res;
	if (s[0] == 'd')
		res = 10;
	else
		res = 26;


	for (int i = 1; i < s.size(); i++)
	{
		int isSame;
		if (s[i] == s[i - 1])
			isSame = 1;
		else
			isSame = 0;

		if (s[i] == 'd')
			res *= (10 - isSame);
		else
			res *= (26 - isSame);
	}

	cout << res;

	return 0;
}