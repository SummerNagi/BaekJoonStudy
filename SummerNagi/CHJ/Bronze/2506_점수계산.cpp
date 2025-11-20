#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int bonus = 0;
	int ans = 0;
	for (int i=0; i<n; i++)
	{
		int check;
		cin >> check;

		if (check)
			bonus++;
		else
			bonus = 0;

		ans += bonus;
	}

	cout << ans;

	return 0;
}
