#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, n;
	cin >> a >> b >> c >> n;

	bool flag = false;

	for (int i = 0; i <= n / a; i++)
		for (int j = 0; j <= n / b; j++)
			for (int k = 0; k <= n / c; k++)
				if (i * a + j * b + k * c == n)
				{
					flag = true;
					break;
				}

	if (flag)
		cout << 1;
	else
		cout << 0;

	return 0;
}
