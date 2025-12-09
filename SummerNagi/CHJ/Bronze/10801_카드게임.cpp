#include <iostream>
#include <vector>
#include <algorithm>
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

	int acnt(0), bcnt(0);

	for (int i=0; i<10; i++)
	{
		if (a[i]>b[i])
			acnt++;
		else if (a[i] < b[i])
			bcnt++;
	}

	if (acnt > bcnt)
		cout << 'A';
	else if (acnt < bcnt)
		cout << 'B';
	else
		cout << 'D';

	return 0;
}
