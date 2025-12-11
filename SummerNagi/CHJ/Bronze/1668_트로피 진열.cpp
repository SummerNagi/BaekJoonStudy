#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int finding(const vector<int>& a)
{
	int tmp = a[0];
	int cnt = 1;
	for (int i=0; i<a.size(); i++)
	{
		if (tmp < a[i])
		{
			tmp = a[i];
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	vector<int> a(n);

	for (int i=0; i<n; i++)
		cin >> a[i];

	cout << finding(a) << '\n';

	reverse(a.begin(), a.end());

	cout << finding(a);
	return 0;
}
