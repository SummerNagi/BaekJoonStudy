#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int good = 0;

	for (int k = 0; k < n; ++k)
	{
		long find = arr[k];
		int i = 0;
		int j = n - 1;

		while (i < j)
		{
			if (arr[i] + arr[j] == find)
			{
				if (i == k) i++;
				else if (j == k) j--;
				else if (i != k && j != k)
				{
					good++;
					break;
				}
			}
			else if (arr[i] + arr[j] < find) i++;
			else j--;
		}
	}

	cout << good;
}