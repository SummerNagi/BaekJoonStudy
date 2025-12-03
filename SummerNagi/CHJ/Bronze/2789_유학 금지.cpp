#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	string cambridge = "CAMBRIDGE";
	string ans;

	for (int i=0; i < s.size(); i++)
		if (cambridge.find(s[i]) == string::npos)
			ans += s[i];

	cout << ans;
	return 0;
}
