#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m, n;
	cin >> m >> n;

	int cnt = 0;
	while (1)
	{
		if (m == 1)
			break;
		if (n == 1)
		{
			cnt++;
			break;
		}
		if (m == 2)
		{
			cnt += 2;
			break;
		}
		if (n == 2)
		{
			cnt += 3;
			break;
		}

		if (cnt += 4)
		{
			m -= 2;
			n -= 2;
		}
	}

	cout << cnt;

	return 0;
}