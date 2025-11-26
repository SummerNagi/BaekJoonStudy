#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		int price, n;
		cin >> price >> n;

		while (n--)
		{
			int q, p;
			cin >> q >> p;

			price += q * p;
		}

		cout << price << '\n';
	}

	return 0;
}
