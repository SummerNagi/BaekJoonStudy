#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s = "ILOVEYONSEI";

	char a;
	cin >> a;

	int ans = 0;
	for (int i=0; i<s.size(); i++)
	{
		ans += abs(s[i] - a);
		a = s[i];
	}

	cout << ans;
	return 0;
}
