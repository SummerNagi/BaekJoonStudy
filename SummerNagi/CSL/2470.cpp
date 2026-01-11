#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> vec(N, 0);

	for (int& num : vec)
	{
		cin >> num;
	}

	sort(vec.begin(), vec.end());

	int left = 0;
	int right = vec.size() - 1;
	int answer = abs(vec[left] + vec[right]);
	int answer_left = left;
	int answer_right = right;

	while (left < right)
	{
		int left_num = vec[left];
		int right_num = vec[right];
		if (answer > abs(left_num + right_num))
		{
			answer = abs(left_num + right_num);
			answer_left = left;
			answer_right = right;
		}

		if (abs(left_num) < abs(right_num))
		{
			if (right_num > 0)
			{
				right = right - 1;
			}
			else
			{
				left = left + 1;
			}
		}
		else
		{
			if (left_num < 0)
			{
				left = left + 1;
			}
			else
			{
				right = right - 1;
			}
		}
	}

	cout << vec[answer_left] << ' ' << vec[answer_right] << '\n';
	return (0);
}
