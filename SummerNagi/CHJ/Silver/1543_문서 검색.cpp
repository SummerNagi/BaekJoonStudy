#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);

	int cnt = 0;
	for (int i=0; i<a.size(); i++)
	{
		bool isSame = true;
		for (int j=0; j<b.size(); j++)
		{
			if (a[i+j] != b[j])
			{
				isSame = false;
				break;
			}
		}

		if (isSame)
		{
			cnt++;
			i += b.size()-1;
		}
	}

	cout << cnt;
}