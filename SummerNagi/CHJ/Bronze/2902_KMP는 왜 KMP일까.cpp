#include <iostream>
#include <vector>

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
		if (i == 0 )
			cout << s[i];
		if (s[i] == '-')
			cout << s[i+1];
	}

	return 0;
}
