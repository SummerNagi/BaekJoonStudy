#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	cin >> t;
	while (t--)
	{
		int alphaA[26] = {};
		int alphaB[26] = {};

		string a, b;
		cin >> a >> b;

		for (int i=0; i<a.size(); i++)
			alphaA[a[i]-'a']++;

		for (int i = 0; i < b.size(); i++)
			alphaB[b[i] - 'a']++;

		bool flag = true;
		for (int i=0; i<26; i++)
		{
			if (alphaA[i] != alphaB[i])
				flag = false;
		}

		if (flag)
			cout << a << " & " << b << " are anagrams.\n";
		else
			cout << a << " & " << b << " are NOT anagrams.\n";
			
	}


	return 0;
}
