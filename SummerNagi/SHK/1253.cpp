#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N, 0);

	for (int idx = 0; idx < N; idx++)
	{
		cin >> arr[idx];
	}

	sort(arr.begin(), arr.end());

	int goodNumCount = 0;

	for (int i = 0; i < N; i++)
	{
		int s = 0;
		int e = N - 1;

		while (s < e)
		{
			if (arr[s] + arr[e] == arr[i])
			{
				if (s != i && e != i)
				{
					goodNumCount++;
					break;
				}
				else if (s == i)
				{
					s++;
				}
				else if (e == i)
				{
					e--;
				}
			}

			else if (arr[s] + arr[e] < arr[i])
			{
				s++;
			}
			else
			{
				e--;
			}	
		}
	}

	cout << goodNumCount;

}