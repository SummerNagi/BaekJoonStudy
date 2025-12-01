#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	while (getline(cin, s))
	{
		int lower(0), upper(0), num(0), space(0);

		for (int i=0; i<s.size(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				lower++;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				upper++;
			else if (s[i] >= '0' && s[i] <= '9')
				num++;
			else
				space++;
		}

		cout << lower << ' ' << upper << ' ' << num << ' ' << space << '\n';
	}
	return 0;
}
