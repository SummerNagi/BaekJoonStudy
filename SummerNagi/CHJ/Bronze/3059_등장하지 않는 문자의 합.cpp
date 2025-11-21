#include <iostream>
#include <vector>

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
		string s;
		cin >> s;
		vector<char> alpha(26, 0);

		for (int i=0; i<s.size(); i++)
			alpha[s[i] - 'A'] = 1;

		int sum = 0;
		for (int i=0; i<alpha.size(); i++)
		{
			if (!alpha[i])
				sum += i + 'A';
		}

		cout << sum << '\n';
	}


	return 0;
}
