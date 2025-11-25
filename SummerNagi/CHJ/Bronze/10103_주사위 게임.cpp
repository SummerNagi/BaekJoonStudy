#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	int s(100), c(100);

	while (t--)
	{
		int a, b;
		cin >> a >> b;

		if (a > b)
			c -= a;
		else if (a < b)
			s -= b;
	}

	cout << s << '\n' << c;
	return 0;
}
