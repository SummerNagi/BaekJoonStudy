#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	char c;
	cin >> a >> c >> b;

	if (c == '*')
	{
		if (a.size() > b.size())
		{
			for (int i = 0; i < b.size()-1; i++)
				a += '0';
			cout << a;
		}
		else
		{
			for (int i = 0; i < a.size()-1; i++)
				b += '0';
			cout << b;
		}
	}
	else
	{
		if (a.size() > b.size())
		{
			if (a[a.size() - b.size()] == '1')
				a[a.size() - b.size()] = '2';
			else
				a[a.size() - b.size()] = '1';
			cout << a;
		}
		else
		{
			if (b[b.size() - a.size()] == '1')
				b[b.size() - a.size()] = '2';
			else
				b[b.size() - a.size()] = '1';
			cout << b;
		}
	}

	return 0;
}
