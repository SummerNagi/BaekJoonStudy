#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	map<int, int> mp;
	int cnt = 0;
	while (n--)
	{
		int num;
		cin >> num;

		if (!mp[num])
			mp[num]++;
		else
			cnt++;
	}

	cout << cnt;

	return 0;
}
