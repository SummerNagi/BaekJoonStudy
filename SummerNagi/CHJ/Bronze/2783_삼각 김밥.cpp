#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double x,y;
	cin >> x >> y;

	double myMin = x / y;

	int n;
	cin >> n;

	while (n--)
	{
		cin >> x >> y;
		myMin = min(myMin, x/y);
	}

	cout << fixed;
	cout.precision(2);
	cout << myMin * 1000;

	return 0;
}
