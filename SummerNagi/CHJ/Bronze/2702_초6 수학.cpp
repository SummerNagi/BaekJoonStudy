#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int r;
	while (b!= 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;

		cout << (a*b)/gcd(a, b) << " ";
		cout << gcd(a, b) << '\n';
	}

	return 0;
}
