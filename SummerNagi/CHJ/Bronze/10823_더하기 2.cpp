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

	string s, tmp;
	while (cin >> tmp)
		s += tmp;

	tmp = "";
	int ans = 0;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] != ',')
			tmp += s[i];
		else
		{
			ans += stoi(tmp);
			tmp = "";
		}
	}

	ans += stoi(tmp);

	cout << ans;
	return 0;
}