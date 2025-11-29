#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	for (int i =0; i<=n; i++)
		for (int j=0; j<=i; j++)
			sum += i + j;

	cout << sum;

	return 0;
}
