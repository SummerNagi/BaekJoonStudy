#include <iostream>
using namespace std;

int dp[1001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin >> dp[1];

	for (int i=2; i<=n; i++)
	{
		cin >> dp[i];

		for (int j=1; j<i; j++)
			dp[i] = max(dp[i], dp[j] + dp[i-j]);
	}

	cout << dp[n];

	return 0;
}