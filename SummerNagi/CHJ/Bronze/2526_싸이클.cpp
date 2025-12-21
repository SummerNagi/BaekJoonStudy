#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, p;
	cin >> n >> p;

	int prev = n;

	vector<int> nums(1001);
	int cnt = 1;

	while (!nums[prev])
	{
		nums[prev] = cnt++;
		prev = prev * n % p;
	}

	cout << cnt - nums[prev];

	return 0;
}
