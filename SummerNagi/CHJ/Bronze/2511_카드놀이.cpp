#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[10];
	int b[10];

	for (int i=0; i<10; i++)
		cin >> a[i];

	for (int i=0; i<10; i++)
		cin >> b[i];

	int acnt = 0;
	int bcnt = 0;

	char last = 'D';
	for (int i=0; i<10; i++)
	{
		if (a[i] > b[i])
		{
			acnt += 3;
			last = 'A';
		}
		else if (a[i] < b[i])
		{
			bcnt += 3;
			last = 'B';
		}
		else
		{
			acnt++;
			bcnt++;
		}
	}

	cout << acnt << ' ' << bcnt << '\n';

	if (acnt > bcnt)
		cout << 'A';
	else if (acnt < bcnt)
		cout << 'B';
	else
		cout << last;

	return 0;
}
