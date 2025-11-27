#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	cout << fixed;
	cout.precision(1);
	while (t--)
	{
		int n;
		cin >> n;

		int subjects = 0;
		float unit = 0;
		int k; float f;

		for (int i = 0; i < n; i++)
		{
			cin >> k >> f;

			subjects += k;
			unit += f * k;
		}
		cout << subjects << ' ' << unit / subjects << '\n';
	}
	return 0;
}
