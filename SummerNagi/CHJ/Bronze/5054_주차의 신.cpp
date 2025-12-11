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
		int mx(0), mn(300);

		int n;
		cin >> n;
		while (n--)
		{
			int num;
			cin >> num;

			mx = max(mx, num);
			mn = min(mn, num);
		}

		cout << (mx - mn) * 2 << '\n';
	}

	return 0;
}
