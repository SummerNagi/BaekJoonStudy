#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	vector<int> sum(n + 1, 0);

	int tmp;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		sum[i] = tmp + sum[i - 1];
	}

	int mmax = INT_MIN;
	for (int i = k; i <= n; i++) 
	{
		tmp = sum[i] - sum[i - k];
		mmax = max(mmax, tmp);
	}

	cout << mmax;

	return 0;
}