#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long sum;
	cin >> sum;

	int n = 0;
	while (sum > 0)
	{
		n++;
		sum -= n;
	}

	if (sum < 0)
		n--;

	cout << n;

	return 0;
}