#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	set<string> st;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (st.find(s) == st.end())
		{
			st.insert(s);
			reverse(s.begin(), s.end());

			if (st.find(s) != st.end())
			{
				cout << s.size() << ' ' << s[s.size() / 2];
				return 0;
			}
			st.insert(s);
		}
		else
		{
			cout << s.size() << ' ' << s[s.size() / 2];
			return 0;
		}
	}

	return 0;
}
