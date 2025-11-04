#include <iostream>
#include <climits>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int pp = INT_MAX, op = INT_MAX;
	int temp = n, currprice = 0;

	while (m--)
	{
		int a, b;
		cin >> a >> b;

		pp = min(pp, a);
		op = min(op, b);
	}

	if (pp < op * 6)
	{
		currprice += (temp / 6) * pp;
		temp %= 6;

		if (pp < temp * op)
			currprice += pp;
		else
			currprice += temp * op;
	}
	else
		currprice += temp * op;

	cout << currprice;
	return 0;
}
