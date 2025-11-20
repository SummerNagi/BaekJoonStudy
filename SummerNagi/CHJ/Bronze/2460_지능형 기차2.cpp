#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans(0), sum(0);

	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;

		sum -= a;
		sum += b;

		ans = max(ans, sum);
	}

	if (ans > 10000)
		cout << 10000;
	else
		cout << ans;

	return 0;
}
