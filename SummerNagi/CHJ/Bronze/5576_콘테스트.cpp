#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[20];
	for (int& i : a)
		cin >> i;

	int wu(0), ku(0);

	for (int i=0; i<10; i++)
		for (int j=i+1; j<10; j++)
			for (int k=j+1; k<10; k++)
				wu = max(wu, a[i] + a[j] + a[k]);
		
	for (int i = 10; i < 20; i++)
		for (int j = i+1; j < 20; j++)
			for (int k = j+1; k < 20; k++)
				ku = max(ku, a[i] + a[j] + a[k]);

	cout << wu << ' ' << ku;
	return 0;
}
