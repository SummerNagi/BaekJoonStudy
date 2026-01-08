#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> targets(N, 0);
	stack<int> stk;

	for (int& num : targets)
	{
		cin >> num;
	}

	vector<int>::iterator it = targets.begin();
	vector<char> answer;
	answer.reserve(2 * N);

	for (int i = 1; i <= N; ++i)
	{
		stk.push(i);
		answer.push_back('+');
		while (!stk.empty() && it != targets.end() && stk.top() == *it)
		{
			++it;
			stk.pop();
			answer.push_back('-');
		}
	}

	if (stk.empty())
	{
		for (char c : answer)
		{
			cout << c << '\n';
		}
	}
	else
	{
		cout << "NO" << '\n';	
	}

	return (0);
}
