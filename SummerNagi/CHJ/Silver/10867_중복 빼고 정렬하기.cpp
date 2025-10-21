#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	set<int> nums;

	for (int i=0; i<n; i++)
	{
		int m;
		cin >> m;

		nums.insert(m);
	}

	for (auto it = nums.begin(); it != nums.end(); it++)
		cout << *it << " ";

	return 0;
}