#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<char> stk;
	string s = "";
	cin >> s;

	long long answer = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '(' && s[i + 1] == ')')
		{
			answer = answer + stk.size();
			i = i + 1;
		}
		else if (s[i] == ')')
		{
			stk.pop();
			answer = answer + 1;
		}
		else
		{
			stk.push(s[i]);
		}
	}

	cout << answer << '\n';

	return (0);
}
