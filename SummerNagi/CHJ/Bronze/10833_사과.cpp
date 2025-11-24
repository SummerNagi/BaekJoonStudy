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

	int sum = 0;
	while (t--)
	{
		int a, b;
		cin >> a >> b;

		sum += b % a;
	}

	cout << sum;
	return 0;
}
