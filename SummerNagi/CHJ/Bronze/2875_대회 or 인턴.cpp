#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	int a, b, ans(0);
	for (int i = 0; i <= k; i++)
	{
		a = (n - i) / 2;
		b = m - (k - i);

		if (ans < min(a,b))
			ans = min(a, b);
	}

	cout << ans;
	return 0;
}
