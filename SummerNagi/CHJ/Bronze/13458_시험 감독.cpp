#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int b, c;
	cin >> b >> c;

	long long ans = 0;

	for (auto& i : a)
	{
		i -= b;
		ans++;

		if (i > 0)
		{
			if (i < c)
				ans++;
			else
			{
				ans += i / c;

				if (i % c > 0)
					ans++;
			}
		}
	}

	cout << ans;
	return 0;
}