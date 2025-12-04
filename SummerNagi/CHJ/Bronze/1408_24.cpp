#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a1[3];
	char c1;
	cin >> a1[0] >> c1 >> a1[1] >> c1 >> a1[2];

	int a2[3];
	cin >> a2[0] >> c1 >> a2[1] >> c1 >> a2[2];

	int start = a1[0] * 3600 + a1[1] * 60 + a1[2];
	int end = a2[0] * 3600 + a2[1] * 60 + a2[2];

	if (start > end)
		end += 3600 * 24;

	int diff = end - start;

	int h, m, s;
	h = diff / 3600;
	diff -= 3600 * h;

	m = diff / 60;
	diff -= 60 * m;

	s = diff;

	string ans;

	if (h < 10)
		ans += '0';
	ans += to_string(h) + ':';

	if (m < 10)
		ans += '0';
	ans += to_string(m) + ':';

	if (s < 10)
		ans += '0';
	ans += to_string(s);

	cout << ans;
	return 0;
}
