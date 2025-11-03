#include <iostream>
#include <climits>
using namespace std;

int main()
{
	string s1;
	cin >> s1;

	int cnt0 = 0;
	int cnt1 = 0;

	for (int i=0; i <s1.size(); i++)
	{
		if (s1[i] == '0')
		{
			if (s1[i] != s1[i+1])
				cnt0++;
		}
		else
		{
			if (s1[i] != s1[i+1])
				cnt1++;
		}
	}

	int ans = INT_MAX;
	ans = min(cnt0, cnt1);

	cout << ans;
	return 0;
}