#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, c;
	cin >> r >> c;

	string s1[10];
	string s2[10];

	for (int i = 0; i < r; i++)
	{
		string s;
		cin >> s;

		for (const auto& l : s)
		{
			s1[i] += l;
			s1[i] += l;
		}
	}

	bool chk = true;
	for (int i = 0; i < r; i++)
	{
		string s;
		cin >> s;
		if (s != s1[i])
			chk = false;
	}

	if (chk)
		cout << "Eyfa";
	else
		cout << "Not Eyfa";

	return 0;
}
