#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int cnt = 1;
	for (int i=0; i<s.size(); i++)
		if (s[i] == ',')
			cnt++;

	cout << cnt;

	return 0;
}
