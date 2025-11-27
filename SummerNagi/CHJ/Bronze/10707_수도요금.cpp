#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;

	int x = a * p;

	int y;
	if (p <= c)
		y = b;
	else
		y = b + (p - c) * d;

	cout << min(x, y);
	return 0;
}
