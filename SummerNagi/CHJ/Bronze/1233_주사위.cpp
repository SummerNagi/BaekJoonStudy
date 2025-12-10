#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	map<int, int> mp;

	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= b; j++)
			for (int k = 1; k <= c; k++)
				mp[i + j + k]++;

	int maxs = 0;
	int ans = 0;
	for (auto it = mp.rbegin(); it != mp.rend(); it++)
	{
		if (maxs <= it->second)
		{
			maxs = it->second;
			ans = it->first;
		}
	}

	cout << ans;
	return 0;
}
