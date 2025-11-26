#include <iostream>
#include <vector>

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
		int sum = 0;
		int minn = 101;
		for (int i = 0; i < 7; i++)
		{
			int n;
			cin >> n;


			if (n % 2 == 0)
			{
				minn = min(minn, n);
				sum += n;
			}
		}

		cout << sum << ' ' << minn << '\n';

	}
	return 0;
}
