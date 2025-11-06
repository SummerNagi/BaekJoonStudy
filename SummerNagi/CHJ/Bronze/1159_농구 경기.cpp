#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int arr[26] = {0, };

	while (n--)
	{
		string s;
		cin >> s;

		arr[s[0]-'a'] += 1;
	}

	bool isNone = true;

	for (int i=0; i<26; i++)
	{
		if (arr[i] >= 5)
		{
			isNone = false;
			cout << (char)(i + 'a');
		}
	}

	if (isNone)
		cout << "PREDAJA";

	return 0;
}
