#include <iostream>
using namespace std;

int R(string s)
{
	int cnt = 1;
	int maxa = 1;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
			cnt++;
		else
		{
			maxa = max(maxa, cnt);
			cnt = 1;
		}
	}

	return maxa;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b, c;
	cin >> a >> b >> c;

	cout << R(a) << '\n' << R(b) << '\n' << R(c);

	return 0;
}
