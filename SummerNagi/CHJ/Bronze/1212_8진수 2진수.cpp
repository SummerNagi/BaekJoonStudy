#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string two[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		int temp = s[i] - '0';

		if (i==0)
			cout << stoi(two[temp]);
		else
			cout << two[temp];
	}

	return 0;
}
