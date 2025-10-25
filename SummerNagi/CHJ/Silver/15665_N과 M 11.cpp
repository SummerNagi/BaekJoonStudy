#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
int n, m;
set<int> nums;
int temp[7];

void BackTracking(int start)
{
	if (start == m)
	{
		for (int i=0; i<m; i++)
			cout << temp[i] << ' ';

		cout << '\n';

		return;
	}

	for (const auto& i : nums)
	{
		temp[start] = i;
		BackTracking(start + 1);
	}
}

int main()
{
	cin >> n >> m;

	for (int i=0; i<n; i++)
	{
		int t;
		cin >> t;
		nums.insert(t);
	}

	BackTracking(0);
}