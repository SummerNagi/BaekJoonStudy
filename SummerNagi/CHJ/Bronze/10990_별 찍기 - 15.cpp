#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i=0; i<n; i++)
	{
		for (int k=0; k<n-i-1; k++)
			cout << ' ';

		if (i==0)
			cout << '*';
		else
		{
			cout << '*';

			for (int j=0; j<i*2-1; j++)
				cout << ' ';

			cout << '*';
		}

		if (i<n-1)
		cout << '\n';
	}

	return 0;
}
