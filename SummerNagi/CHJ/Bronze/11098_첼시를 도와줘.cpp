#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		long long maxprice = 0;
		string maxname;

		while (n--)
		{
			long long price;
			string name;
			cin >> price >> name;

			if (maxprice < price)
			{
				maxprice = price;
				maxname = name;
			}
		}
		cout << maxname << '\n';
	}

	return 0;
}
