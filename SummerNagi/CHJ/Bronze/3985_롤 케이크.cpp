#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cake, n;
	cin >> cake >> n;

	vector<int> cakes(cake + 1, 0);
	vector<int> check(n + 1, 0);
	int mxidx, mxnum(0);

	for (int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;

		for (int j = a; j <= b; j++)
		{
			if (!cakes[j])
			{
				cakes[j] = i;
				check[i]++;
			}
		}

		if (mxnum < abs(b - a) + 1)
		{
			mxnum = abs(b - a) + 1;
			mxidx = i;
		}
	}

	int mnidx(0), mnnum(0);
	for (int i = 1; i < check.size(); i++)
	{
		if (mnnum < check[i])
		{
			mnnum = check[i];
			mnidx = i;
		}
	}

	cout << mxidx << '\n' << mnidx;

	return 0;
}
