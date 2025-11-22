#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;

	int max1 = 0;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == b && b == c && a == c)
			max1 = max(max1, 10000 + a * 1000);
		else if (a != b && a != c && b != c)
		{
			max1 = max(max1, a * 100);
			max1 = max(max1, b * 100);
			max1 = max(max1, c * 100);
		}
		else
		{
			if (a == b)
				max1 = max(max1, 1000 + a * 100);
			else if (b == c)
				max1 = max(max1, 1000 + b * 100);
			else if (a == c)
				max1 = max(max1, 1000 + a * 100);
		}

	}
	cout << max1;

	return 0;
}
