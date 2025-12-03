#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i] >= 'D' && s[i] <= 'Z')
			s[i] -= 3;
		else if (s[i] == 'A')
			s[i] = 'X';
		else if (s[i] == 'B')
			s[i] = 'Y';
		else if (s[i] == 'C')
			s[i] = 'Z';
	}

	cout << s;
	return 0;
}
