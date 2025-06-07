#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int maxN = 2'000'000;

int b1747()
{
	int N = 0;
	cin >> N;
	vector<bool> lst(maxN, false);
	for (int i = 2; i <maxN; ++i)
	{
		if (lst[i] == false)
		{
			if (i >= N)
			{
				string s = to_string(i);
				int f = 0;
				int e = s.size() - 1;
				while (f < e)
				{
					if (s[f] != s[e])
						break ;
					f = f + 1;
					e = e - 1;
				}
				if (f >= e)
				{
					cout << i << endl;
					return (0);
				}

			}
			for (int num = i + i; num < maxN; num = num + i)
			{
				lst[num] = true;
			}
		}
	}
	return (0);
}