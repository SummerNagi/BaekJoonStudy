#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    for (int i=0; i<3; i++)
    {
	    int n;
		cin >> n;

		__int128 sum = 0;
		while (n--)
		{
			long long k;
			cin >> k;

			sum += k;

		}

		if (sum == 0)
			cout << "0" << '\n';
		else if (sum > 0)
			cout << "+" << '\n';
		else
			cout << "-" << '\n';
    }

	return 0;
} 
