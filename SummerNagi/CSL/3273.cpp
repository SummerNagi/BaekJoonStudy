#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int b3273()
{
	int answer = 0;
	int N = 0;
	cin >> N;
	vector<int> lst(N, 0);

	for (int i = 0; i < N; ++i)
	{
		cin >> lst[i];
	}
	int x = 0;
	cin >> x;

	sort(lst.begin(), lst.end());

	int front = 0;
	int end = lst.size() - 1;

	while (front < end)
	{
		if (lst[front] + lst[end] == x)
		{
			answer = answer + 1;
			front = front + 1;
			end = end - 1;
		}
		else if (lst[front] + lst[end] > x)
		{
			end = end - 1;
		}
		else
		{
			front = front + 1;
		}
	}
	cout << answer << endl;
	return (0);
}