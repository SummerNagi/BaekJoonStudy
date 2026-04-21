#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	if (N == 1)
	{
		cout << 0;
		return (0);
	}

	vector<char> vec(N + 1, 1);

	for (int i = 2; i * i <= N; ++i)
	{
		if (vec[i] == 0)
		{
			continue;
		}
		for (int j = i * i; j <= N; j = j + i)
		{
			vec[j] = 0;
		}
	}

	vector<int> lst;
	for (int i = 2; i <= N; ++i)
	{
		if (vec[i] == 1)
		{
			lst.push_back(i);
		}
	}

	int l = 0;
	int r = 0;
	int rEnd = lst.size();
	int answer = 0;
	long long sum = 0;

	while (true)
	{
		if (sum >= N)
		{
			if (sum == N)
			{
				answer = answer + 1;
			}
			sum = sum - lst[l];
			l = l + 1;
		}
		else
		{
			if (r >= rEnd)
			{
				break;
			}
			sum = sum + lst[r];
			r = r + 1;
		}
	}

	cout << answer << '\n';
	return (0);
}
