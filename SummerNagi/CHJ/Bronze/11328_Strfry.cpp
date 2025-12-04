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
		int alpha1[26] = {};
		int alpha2[26] = {};

		string s1, s2;
		cin >> s1 >> s2;

		for (int i=0; i<s1.size(); i++)
			alpha1[s1[i]-'a']++;

		for (int i = 0; i < s2.size(); i++)
			alpha2[s2[i] - 'a']++;

		bool ispossible = true;
		for (int i=0; i<26; i++)
			if (alpha1[i] != alpha2[i])
				ispossible = false;

		if (ispossible)
			cout << "Possible\n";
		else
			cout << "Impossible\n";

	}
	return 0;
}
