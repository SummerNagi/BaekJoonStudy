#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sum(string a, string b)
{
	int num, carry = 0;
	string result;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.size() < b.size())
		a += '0';

	while (a.size() > b.size())
		b += '0';

	for (int i = 0; i < a.size(); i++)
	{
		num = (a[i] - '0' + b[i] - '0' + carry) % 10;
		result += to_string(num);
		carry = (a[i] - '0' + b[i] - '0' + carry) / 10;
	}

	if (carry != 0)
		result += to_string(carry);

	reverse(result.begin(), result.end());

	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string dp[10001];
	dp[0] = '0';
	dp[1] = '1';

	for (int i = 2; i <=n; i++)
		dp[i] = sum(dp[i - 1] , dp[i - 2]);

	cout << dp[n];
	return 0;
}
