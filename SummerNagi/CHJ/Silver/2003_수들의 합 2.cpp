#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> nums(n);
	for (int i=0; i<n; i++)
		cin >> nums[i];

	int count = 0;
	int left = 0;
	int right = 0;
	int sum = nums[0];

	while (right < n)
	{
		if (sum == m)
		{
			count++;
			sum += nums[++right];
		}
		else if (sum < m)
		{
			sum += nums[++right];
		}
		else
		{
			sum -= nums[left++];
		}
	}

	cout << count;

	return 0;
}