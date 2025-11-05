#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int y(0), m(0), temp;

	for (int i=0; i<n; i++)
	{
		cin >> temp;

		y += (temp / 30 + 1) * 10;
		m += (temp / 60 + 1) * 15;
	}

	if (y < m)
		cout << "Y " << y;
	else if (y > m)
		cout << "M " << m;
	else
		cout << "Y M " << y;

	return 0;
}