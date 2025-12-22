#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (1)
	{
		int n;
		cin >> n;

		if (!n)
			break;

		vector<string> a(n);
		map<string, int> mp;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

			string tmp;

			for (int j = 0; j < a[i].size(); j++)
				tmp += tolower(a[i][j]);

			mp[tmp] = i;
		}
		int idx = mp.begin()->second;
		cout << a[idx] << '\n';
	}

	return 0;
}