#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	bool check = false;
	while (n > 0)
	{
		if (n > 3)
		{
			n -= 3;
			if (check)
				check = false;
			else
				check = true;
		}
		else
		{
			n -= 1;
			if (check)
				check = false;
			else
				check = true;
		}
	}

	if (check)
		cout << "SK";
	else
		cout << "CY";

	return 0;
}
