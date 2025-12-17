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

	string tmp;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == 'U')
			tmp += s[i];
		else if (s[i] == 'C')
			tmp += s[i];
		else if (s[i] == 'P')
			tmp += s[i];
		else if (s[i] == 'C')
			tmp += s[i];
	}

	int check[4] = {0};
	for (int i=0; i<tmp.size(); i++)
	{
		if (tmp[i] == 'U')
		{
			check[0] = 1;
			for (int j=i; j<tmp.size(); j++)
			{
				if (tmp[j] == 'C')
				{
					check[1] = 1;
					for (int k=j; k<tmp.size(); k++)
					{
						if (tmp[k] == 'P')
						{
							check[2] = 1;
							for (int m = k; m<tmp.size(); m++)
							{
								if (tmp[m] == 'C')
									check[3] = 1;
							}
						}
					}
				}
			}
		}
	}

	bool flag = false;
	for (int i=0; i<4; i++)
		if (!check[i])
			flag = true;

	if (flag)
		cout << "I hate UCPC";
	else
		cout << "I love UCPC";

	return 0;
}
