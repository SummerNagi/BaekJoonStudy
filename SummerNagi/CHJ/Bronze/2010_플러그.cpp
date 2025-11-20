#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	for (int i=0; i<n; i++)
	{
		int j;
		cin >> j;

		if (i == n-1)
			sum += j;
		else
			sum += j-1;
	}

	cout << sum;
	return 0;
}
