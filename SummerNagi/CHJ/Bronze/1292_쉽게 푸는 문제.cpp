#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	vector<int> nums;

	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 0; j < i; j++)
			nums.push_back(i);
	}

	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += nums[i-1];

	cout << sum;
	return 0;
}
