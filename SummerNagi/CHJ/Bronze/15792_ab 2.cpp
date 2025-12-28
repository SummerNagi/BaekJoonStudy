#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int a, b;
	cin >> a >> b;
	cout << a / b << '.';
	a %= b;

	for (int i = 0; i <= 1000; i++)
	{
		a *= 10;
		cout << a / b;
		a = a - (a / b) * b;
	}

	return 0;
}