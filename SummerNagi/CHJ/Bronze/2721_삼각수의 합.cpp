#include <iostream>
using namespace std;

int tn(int n)
{
	int temp = 0;
	for (int i = 1; i <= n; i++)
		temp += i;

	return temp;
}

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

		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i * tn(i + 1);
		}

		cout << sum << '\n';
	}

	return 0;
}
