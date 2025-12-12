#include <iostream>
using namespace std;

long long dp[90];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	dp[0] = 0;
	dp[1] = 1;

	for (int i=2; i<=n; i++)
		dp[i] = dp[i-2] + dp[i-1];

	cout << dp[n];
	
	return 0;
}
