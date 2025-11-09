#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0;

	while (n--)
	{
		string s;
		cin >> s;

		stack<char> st;

		for (int j=0; j<s.size(); j++)
		{
			if (!st.empty() && st.top() == s[j])
			{
				st.pop();
				continue;
			}
			st.push(s[j]);
		}
		if (st.empty())
			cnt++;
	}

	cout << cnt;

	return 0;
}