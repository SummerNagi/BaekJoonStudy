#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int cnt = 0;
	while (1)
	{
		cnt++;
		string s1, s2;
		cin >> s1 >> s2;

		if (s1 == "END")
			break;

		int a[26] = {};
		int b[26] = {};

		for (int i = 0; i < s1.size(); i++)
			a[s1[i] - 'a']++;

		for (int i = 0; i < s2.size(); i++)
			b[s2[i] - 'a']++;

		bool flag = false;
		for (int i = 0; i < 26; i++)
			if (a[i] != b[i])
			{
				flag = true;
				break;
			}

		if (!flag)
			cout << "Case " << cnt << ": same\n";
		else
			cout << "Case " << cnt << ": different\n";
	}

	return 0;
}