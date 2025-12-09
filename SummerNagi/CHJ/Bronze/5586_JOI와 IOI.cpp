#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int joi = 0;
	int ioi = 0;

	for (int i=0; i<s.size(); i++)
	{
		if (s.substr(i, 3) == "JOI")
			joi++;
		else if (s.substr(i,3) == "IOI")
			ioi++;
	}

	cout << joi << '\n' << ioi;

	return 0;
}
