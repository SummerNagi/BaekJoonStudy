#include <iostream>
#include <set>

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
		int k;
		cin >> k;

		multiset<int> ms;

		for (int i = 0; i < k; i++)
		{
			char c; int n;
			cin >> c >> n;

			if (c == 'I')
				ms.insert(n);
			else if (c == 'D' && n == -1)
			{
				if (!ms.empty())
					ms.erase(ms.begin());
			}
			else if (c == 'D' && n == 1)
			{
				if (!ms.empty())
				{
					auto iter = ms.end();
					iter--;
					ms.erase(iter);
				}
			}
		}

		if (ms.empty())
			cout << "EMPTY";
		else
		{
			auto iter = ms.end();
			iter--;
			cout << *iter << ' ' << *ms.begin();
		}
		cout << '\n';
	}

	return 0;
}
