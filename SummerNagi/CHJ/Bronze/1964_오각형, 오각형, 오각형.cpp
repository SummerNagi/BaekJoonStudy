#include <iostream>
using namespace std;

int dp[10000001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	dp[1] = 5;

	for (int i = 2; i <= n; i++)
		dp[i] = (dp[i - 1] + 5 * i - (2 * i - 1)) % 45678;
	
	cout << dp[n];

	return 0;
}
