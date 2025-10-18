#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> nums;
vector<int> arr;
vector<bool> visited(100010);

void BackTracking(int current, int idx)
{
	if (current == m)
	{
		for (const auto& i : arr)
		{
			if (i > 0)
			cout << i << " ";
		}
		cout << '\n';
		return;
	}

	int temp = -1;

	for (int i=idx; i<n; i++)
	{
		if (visited[i])
			continue;

		if (nums[i] == temp)
			continue;

		visited[i] = true;
		temp = nums[i];
		arr[current] = nums[i];

		BackTracking(current+1, i);
		visited[i] = false;
	}
}

int main()
{
	cin >> n >> m;

	nums.resize(n);
	arr.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	BackTracking(0, 0);

	return 0;
}