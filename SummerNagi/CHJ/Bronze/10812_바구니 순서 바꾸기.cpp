#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, i, j, k;
	vector<int> v;
	cin >> n >> m;

	for (int i=1; i<=n; i++)
		v.push_back(i);

	while (m--)
	{
		cin >> i >> j >> k;
		rotate(v.begin() + i - 1, v.begin() + k - 1, v.begin() + j);
	}

	for (const int& num : v)
		cout << num << ' ';
	return 0;
}
