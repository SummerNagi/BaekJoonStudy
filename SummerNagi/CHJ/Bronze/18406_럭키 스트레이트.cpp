#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int left(0), right(0);

	for (int i=0; i<s.size(); i++)
	{
		if (i < s.size() / 2)
			left += s[i] - '0';
		else
			right += s[i] - '0';
	}

	if (left == right)
		cout << "LUCKY";
	else
		cout << "READY";

	return 0;
}
