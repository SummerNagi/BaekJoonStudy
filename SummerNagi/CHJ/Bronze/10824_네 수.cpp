#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	string s1 = to_string(a) + to_string(b);
	string s2 = to_string(c) + to_string(d);

	cout << stol(s1) + stol(s2);

	return 0;
}
