#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	int num[160] = {};
	bool isZero = false;

	if (a.size() < b.size())
	{
		string c = a;
		a = b;
		b = c;
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int idx = a.size();

	for (int i=0; i<a.size(); i++)
	{
		if (i < b.size())
			num[i] += (a[i] - '0') + (b[i] - '0');
		else
			num[i] += (a[i] - '0');

		if (num[i] != 0)
			isZero = true;

		if (num[i] >= 2)
		{
			num[i] -= 2;
			num[i+1]++;

			if (i == a.size() - 1)
				idx++;
		}
	}

	if (!isZero)
		cout << 0;
	else
	{
		bool start = false;

		for (int i=idx-1; i>=0; i--)
		{
			if (num[i] == 1)
				start = true;

			if (start == true)
				cout << num[i];
		}
	}

	return 0;
}
