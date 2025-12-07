#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, c;
	cin >> a >> b >> c;

	if (b < c)
	{
		long long ans = a / (c - b) + 1;
		cout << ans;
	}
	else
		cout << -1;

	return 0;
}
