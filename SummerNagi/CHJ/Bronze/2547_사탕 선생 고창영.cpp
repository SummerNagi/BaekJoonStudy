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
		int n;
		cin >> n;

		__int128 sum = 0;
		for (int i=0; i<n; i++)
		{
			long long candy;
			cin >> candy;

			sum += candy;
		}

		if (sum % n == 0)
			cout << "YES";
		else
			cout << "NO";

		cout << '\n';
	}

	return 0;
}
