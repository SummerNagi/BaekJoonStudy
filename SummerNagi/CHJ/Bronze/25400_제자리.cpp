#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int cnt = 1;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == cnt)
		{
			cnt++;
			continue;
		}
		ans++;
	}

	cout << ans;
	return 0;
}