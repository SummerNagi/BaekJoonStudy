#include <iostream>
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
		int n; string s;
		cin >> n >> s;

		string tmp;
		for (int i = 0; i < s.size(); i++)
			if (i != n - 1)
				tmp += s[i];

		cout << tmp << '\n';
	}


	return 0;
}
