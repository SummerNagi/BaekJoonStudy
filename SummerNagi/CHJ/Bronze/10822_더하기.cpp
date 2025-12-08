#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, ans;
	int sum(0), p(0);
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ',')
		{
			sum += stoi(ans);
			ans = "";
		}
		else
			ans += s[i];
	}

	cout << sum + stoi(ans) << '\n';
	return 0;
}
