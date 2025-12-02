#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	int alpha1[26] = {};
	int alpha2[26] = {};

	for (int i = 0; i < s1.size(); i++)
		alpha1[s1[i] - 'a']++;

	for (int i = 0; i < s2.size(); i++)
		alpha2[s2[i] - 'a']++;

	int cnt = 0;
	for (int i=0; i<26; i++)
		cnt += abs(alpha1[i] - alpha2[i]);

	cout << cnt;
	return 0;
}
