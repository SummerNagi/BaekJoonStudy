#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = 1;
	int ans = 0;
	while (n > 0)
	{
		if (n < cnt)
			cnt = 1;

		n -= cnt;
		cnt++;
		ans++;
	}

	cout << ans;
	return 0;
}
