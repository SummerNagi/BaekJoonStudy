#include <iostream>
using namespace std;

int n, a, b, c, gcd;

int GCD(int a, int b)
{
	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	if (n == 2)
	{
		cin >> a >> b;
		gcd = GCD(a, b);
	}
	else
	{
		cin >> a >> b >> c;
		gcd = GCD(a, GCD(b, c));
	}

	for (int i = 1; i <= gcd; i++)
	{
		if (gcd % i == 0)
			cout << i << '\n';
	}

	return 0;
}
