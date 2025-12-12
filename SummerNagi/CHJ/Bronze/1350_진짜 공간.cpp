#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<long long> a(n);

	for (int i=0; i<n; i++)
		cin >> a[i];

	int cluster;
	cin >> cluster;

	long long cnt = 0;

	for (int i=0; i<n; i++)
	{
		cnt += a[i] / cluster;

		if (a[i] % cluster != 0)
			cnt++;
	}

	cout << cluster * cnt;
	return 0;
}
