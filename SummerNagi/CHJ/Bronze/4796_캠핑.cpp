#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 1;
	while (1)
	{
		int l, p, v;
		cin >> l >> p >> v;

		if (!l && !p && !v)
			break;

		int use = v / p;
		int remain = v % p;

		remain = min(l, remain);

		cout << "Case " << cnt << ": " << l * use + remain << '\n';
		cnt++;
	}

	return 0;
}
