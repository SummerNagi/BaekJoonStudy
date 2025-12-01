#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m,n;
	cin >> m >> n;

	int sum = 0;
	int minp = 10001;

	for (int i=0; i<n; i++)
	{
		if (i*i >= m && i*i <= n)
		{
			sum += i*i;

			minp = min(minp, i*i);
		}
	}

	if (sum)
		cout << sum << '\n' << minp;
	else
		cout << -1;
	return 0;
}
