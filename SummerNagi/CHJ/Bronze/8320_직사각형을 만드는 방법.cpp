#include <iostream>
#include <cmath>
using namespace std;

int d[10001];

int getCnt(int n)
{
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (!(n % i))
			cnt++;
	}
	return cnt;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	d[1] = 1;
	d[2] = 2;

	for (int i = 3; i <= n; i++)
		d[i] = d[i - 1] + getCnt(i);

	cout << d[n];
	return 0;
}
