#include <iostream>
using namespace std;

void to_bin(long long number)
{
	if (number == 0 || number == 1)
		cout << number;
	else
	{
		to_bin(number / 2);
		cout << number % 2;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long  a;
	cin >> a;
	to_bin(a);

	return 0;
}
