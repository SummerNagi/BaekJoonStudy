#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b, c;
	cin >> a >> b;

	for (int i = 0; i < 8; i++)
	{
		c += a[i];
		c += b[i];
	}

	while (c.size() > 2)
	{
		string tmp;
		for (int i = 0; i < c.size() - 1; i++)
		{
			int sum = (c[i] - '0') + (c[i + 1] - '0');

			if (sum > 9)
				tmp += sum % 10 + '0';
			else
				tmp += sum + '0';
		}

		c = tmp;
	}

	cout << c;
	return 0;
}
