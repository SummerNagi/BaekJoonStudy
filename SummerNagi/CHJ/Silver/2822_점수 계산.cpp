#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> arr(8);
	for (int i=0; i<8; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i+1;
	}
	
	sort(arr.begin(), arr.end(), greater<>());

	vector<int> nums(5);
	int sum = 0;
	for (int i=0; i<5; i++)
	{
		nums[i] = arr[i].second;
		sum += arr[i].first;
	}

	sort(nums.begin(), nums.end());

	cout << sum << '\n';

	for (const auto& i : nums)
		cout << i << ' ';
}