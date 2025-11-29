#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	while (1)
	{
		int j;
		cin >> j;

		if(!j)
			break;

		if(j % n)
			cout << j << " is NOT a multiple of " << n << ".\n";
		else
			cout << j << " is a multiple of " << n << ".\n";
	}

	return 0;
}
