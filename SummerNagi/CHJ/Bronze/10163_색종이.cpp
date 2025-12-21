#include <iostream>
using namespace std;

int paper[1001][1001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b, x, y;
		cin >> a >> b >> x >> y;

		for (int j = a; j < a + x; j++)
			for (int k = b; k < b + y; k++)
				paper[j][k] = i + 1;
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		for (int j = 0; j < 1001; j++)
			for (int k = 0; k < 1001; k++)
				if (paper[j][k] == i + 1)
					cnt++;
		cout << cnt << '\n';
	}

	return 0;
}
