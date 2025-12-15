#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; string s;
	cin >> n >> s;

	int cnt = 1;
	int tmp = 0;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == 'S')
			cnt++;
		else
		{
			tmp++;
			if (tmp == 2)
			{
				cnt++;
				tmp = 0;
			}
		}
	}

	if (cnt > n)
		cout << n;
	else
		cout << cnt;

	return 0;
}
