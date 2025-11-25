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

		int sum = 0;
		for (int i=0; i<n; i++)
		{
			int k;
			cin >> k;
			sum += k;
		}
		cout << sum << '\n';
	}

	return 0;
}
