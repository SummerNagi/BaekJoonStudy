#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	cin >> n;

	string s;
	while (n > 0)
	{
		if (n % 2 == 1)
			s += '1';
		else
			s += '0';
		n /= 2;

	}

	reverse(s.begin(), s.end());

	long long sum = 0;
	for (int i = 0; i < s.size(); i--)
	{
		if (s[i] == '1')
		{
			sum += pow(2, i);
		}
	}

	cout << sum;
	return 0;
}
