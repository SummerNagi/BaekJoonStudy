#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b, c, ans;
	cin >> a >> b >> c;

	if (c % 2)
		ans = a ^ b;
	else
		ans = a;

	cout << ans;

	return 0;
}