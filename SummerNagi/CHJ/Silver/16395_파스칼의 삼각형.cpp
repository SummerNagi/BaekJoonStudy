#include <iostream>

using namespace std;

int a[31][31];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	for (int i=0; i<31; i++)
		a[i][0] = 1;

	for (int i=1; i<31; i++)
	{
		for (int j=1; j<= i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];
	}

	int n, k;
	cin >> n >> k;

	cout << a[n-1][k-1];
	return 0;
}
