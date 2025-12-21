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

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int mxcnt = 0;

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
				cnt++;
			else if (a[i] < a[j])
				break;
		}
		mxcnt = max(mxcnt, cnt);
	}

	cout << mxcnt;
	return 0;
}
