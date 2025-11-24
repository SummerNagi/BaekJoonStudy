#include <iostream>
#include <string>
#include <vector>

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
		int r, e, c;
		cin >> r >> e >> c;

		if (r > e - c)
			cout << "do not advertise\n";
		else if (r == e - c)
			cout << "does not matter\n";
		else
			cout << "advertise\n";

	}
	return 0;
}
