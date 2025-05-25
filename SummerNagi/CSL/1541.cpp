#include <iostream>
#include <sstream>

using namespace std;

int b1541()
{
	string s;
	cin >> s;
	stringstream ss(s);
	int num = 0;
	char c = 0;
	ss >> num;
	int answer = num;
	while (ss >> c)
	{
		if (c == '+')
		{
			ss >> num;
			answer = answer + num;
		}
		else
		{
			break ;
		}
	}
	while (ss >> num)
	{
		answer = answer - num;
		ss >> c;
	}
	cout << answer << endl;
	return (0);
}