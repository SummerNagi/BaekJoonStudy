#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int sum = 10;
	for (int i=1; i<s.size(); i++)
	{
		if (s[i-1] != s[i])
			sum += 10;
		else
			sum += 5;
	}

	cout << sum;

	return 0;
}
