#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n, 0);

		for (int i = 2; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int idx = i * j - 1;
				if (idx < a.size())
				{
					if (a[idx])
						a[idx] = 0;
					else
						a[idx] = 1;
				}
			}
		}

		int cnt = 0;
		for (const auto& i : a)
			if (!i)
				cnt++;

		cout << cnt << '\n';
	}
	return 0;
}
