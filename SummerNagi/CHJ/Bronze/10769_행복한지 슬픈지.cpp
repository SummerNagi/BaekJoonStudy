#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	string face = ":-";

	int hcnt = 0;
	int scnt = 0;

	int fcnt = 0;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == face[fcnt])
			fcnt++;
		else if (fcnt == 2)
		{
			if (s[i] == ')')
				hcnt++;
			else if (s[i] == '(')
				scnt++;

			fcnt = 0;
		}
		else
			fcnt = 0;
	}

	if (!hcnt && !scnt)
		cout << "none";
	else if (hcnt == scnt && hcnt > 0 && scnt > 0)
		cout << "unsure";
	else if (hcnt > scnt)
		cout << "happy";
	else
		cout << "sad";

	return 0;
}
