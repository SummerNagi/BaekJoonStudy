#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> a;

	string s;
	cin >> s;

	string tmp;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ',')
			tmp += s[i];
		else
		{
			a.push_back(stoi(tmp));
			tmp = "";
		}
	}

	a.push_back(stoi(tmp));

	if (k)
	{
		k--;
		while (k--)
		{
			vector<int> b;
			for (int i = 0; i < a.size() - 1; i++)
				b.push_back(a[i + 1] - a[i]);

			a = b;
		}

		for (int i = 0; i < a.size() - 1; i++)
		{
			if (i != a.size() - 2)
				cout << a[i + 1] - a[i] << ',';
			else
				cout << a[i + 1] - a[i];

		}

	}
	else
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (i != a.size() - 1)
				cout << a[i] << ',';
			else
				cout << a[i];
		}
	}
	return 0;
}
