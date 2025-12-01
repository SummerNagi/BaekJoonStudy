#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int male[7] = {};
	int female[7] = {};

	for (int i=0; i<n; i++)
	{
		int gender, grade;
		cin >> gender >> grade;

		if (gender)
			male[grade]++;
		else
			female[grade]++;
	}

	int cnt = 0;
	for (int i=1; i<=6; i++)
	{
		cnt += male[i] / k;
		male[i] %= k;
		if (male[i])
			cnt++;

		cnt += female[i] / k;
		female[i] %= k;
		if (female[i])
			cnt++;
	}

	cout << cnt;
	return 0;
}
