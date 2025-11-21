#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << fixed;
	cout.precision(3);

	int cnt = 0;
	while (1)
	{
		cnt++;

		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		char v = 0;
		float ans = 0;
		if (c == -1)
		{
			ans = sqrt(a * a + b * b);
			v = 'c';
		}
		else if (b == -1)
		{
			ans = sqrt(c * c - a * a);
			v = 'b';
		}
		else if (a == -1)
		{
			ans = sqrt(c * c - b * b);
			v = 'a';
		}

		cout << "Triangle #" << cnt << '\n';

		if (ans > 0)
			cout << v << " = " << ans << '\n' << '\n';
		else
			cout << "Impossible.\n" << '\n';
	}

	return 0;
}
