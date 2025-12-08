#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();
	for (int i=1; i<=n; i++)
	{
		string s, temp, ans;
		getline(cin, s);
		stack<string> st;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == ' ')
			{
				st.push(temp);
				st.push(" ");
				temp.clear();
			}
			else
				temp += s[j];
		}

		st.push(temp);

		while (!st.empty())
		{
			ans += st.top();
			st.pop();
		}
		cout << "Case #" << i << ": " << ans << "\n";
	}

	return 0;
}
