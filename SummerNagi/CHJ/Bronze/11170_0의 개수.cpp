#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;

		int cnt = 0;
		for (int i = a; i <= b; i++)
		{
			string tmp = to_string(i);

			for (int i = 0; i<tmp.size(); i++)
			{
				if (tmp[i] == '0')
					cnt++;
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}
