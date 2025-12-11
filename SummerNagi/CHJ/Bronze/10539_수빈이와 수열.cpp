#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum(0), num, res;
	for (int i=0; i<n; i++)
	{
		cin >> num;

		res = num * (i+1) - sum;
		cout << res << ' ';
		sum += res;
	}


	return 0;
}
