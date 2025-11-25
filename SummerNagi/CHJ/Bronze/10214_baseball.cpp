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
		int suma = 0;
		int sumb = 0;

		for (int i = 0; i < 9; i++)
		{
			int a, b;
			cin >> a >> b;

			suma += a;
			sumb += b;
		}

		if (suma > sumb)
			cout << "Yonsei" << '\n';
		else if (suma < sumb)
			cout << "Korea" << '\n';
		else
			cout << "Draw" << '\n';
	}

	return 0;
}
