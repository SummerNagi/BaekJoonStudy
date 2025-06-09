// º¸·ù.

#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

int b11689()
{
	long long n;
	
	cin >> n;
	int maxN = sqrt(n);
	vector<bool> memo(maxN + 1, true);
	vector<int> lst;
	unordered_set<int> s;
	lst.push_back(1);
	while (n != 1)
	{
		for (int i = 2; i < maxN; ++i)
		{
			if (lst[i] == true)
			{

			}

		}
	}
	cout << s.size() - 1 << endl;
	return (0);
}