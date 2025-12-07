#include <iostream>
#include <string>
using namespace std;

int alpha[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	while (cin >> s)
	{
		for (int i = 0; i < s.size(); i++)
			if (s[i] != ' ')
				alpha[s[i] - 'a']++;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++)
		cnt = max(cnt, alpha[i]);

	for (int i = 0; i < 26; i++)
		if (cnt == alpha[i])
		{
			char c = i + 'a';
			cout << c;
		}

	return 0;
}
