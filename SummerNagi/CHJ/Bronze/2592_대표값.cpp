#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> mp;
	double sum = 0;
	for (int i=0; i<10; i++)
	{
		int n;
		cin >> n;

		sum += n;
		mp[n]++;
	}

	sum /= 10;

	int maxbin = 0;
	int bin;
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second > maxbin)
		{
			maxbin = it->second;
			bin = it->first;
		}
	}
	cout << sum << ' ' << bin;
	return 0;
}
