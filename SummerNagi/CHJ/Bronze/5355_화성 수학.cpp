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
	cout << fixed;
	cout.precision(2);

	while (t--)
	{
		double n; string s;
		cin >> n;
		getline(cin, s);

		for (int i=0; i<s.size(); i++)
		{
			if (s[i] == '@')
				n *= 3;
			else if (s[i] == '%')
				n += 5;
			else if (s[i] == '#')
				n -= 7;
		}
		
		cout << n <<'\n';
	}

	return 0;
}
