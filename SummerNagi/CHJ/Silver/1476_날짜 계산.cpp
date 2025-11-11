#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int e, s, m, cnt = 1;
	cin >> e >> s >> m;

	int a, b, c;
	a = b = c = 1;

	while (1)
	{
		if (a == e && b == s && c == m)
		{
			cout << cnt;
			break;
		}
		a++; b++; c++;

		if (a > 15)
			a = 1;
		if (b > 28)
			b = 1;
		if (c > 19)
			c = 1;

		cnt++;
	}

	return 0;
}