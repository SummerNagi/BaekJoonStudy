#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int ans = 0;
	for (int i=4; i<=n; i++)
	{
		string tmp = to_string(i);

		bool flag = true;
		for (int i=0; i<tmp.size(); i++)
		{
			if (tmp[i] != '4' && tmp[i] != '7')
			{
				flag = false;
				break;
			}
		}

		if (flag)
			ans = max(ans, i);
	}

	cout << ans;
	return 0;
}
