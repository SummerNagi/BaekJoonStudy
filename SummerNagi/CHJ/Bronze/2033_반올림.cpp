#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int p = 10;

	while (n > p)
	{
		n = (n + p / 2) / p * p;
		p *= 10;
	}

	cout << n;

	return 0;
}