#include <deque>
#include <iostream>
#include <string>
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

		deque<int> numbers;

		int n;
		cin >> n;

		string snum;
		cin >> snum;

		string temp;
		for (int i = 1; i < snum.size() - 1; i++)
		{
			if (snum[i] == ',')
			{
				numbers.push_back(stoi(temp));
				temp = "";
			}
			else
				temp += snum[i];
		}

		if (!temp.empty())
			numbers.push_back(stoi(temp));

		bool isReverse = false;
		bool isError = false;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'R')
			{
				if (!isReverse)
					isReverse = true;
				else
					isReverse = false;
			}
			else
			{
				if (!numbers.empty())
				{
					if (isReverse)
						numbers.pop_back();
					else
						numbers.pop_front();
				}
				else
				{
					isError = true;
					break;
				}
			}
		}

		if (isError)
		{
			cout << "error" << '\n';
			continue;
		}
		
		if (!numbers.empty())
		{
			cout << '[';
			if (isReverse)
			{
				for (auto it = numbers.rbegin(); it != numbers.rend(); it++)
				{
					if (it == numbers.rend() - 1)
						cout << *it;
					else
						cout << *it << ',';
				}
			}
			else
			{
				for (auto it = numbers.begin(); it != numbers.end(); it++)
				{
					if (it == numbers.end() - 1)
						cout << *it;
					else
						cout << *it << ',';
				}
			}
			cout << ']';
		}
		else
			cout << "[]";
		
		if (t > 0)
			cout << '\n';
	}

	return 0;
}
