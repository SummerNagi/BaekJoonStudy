#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		cout << "Distances: ";
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] > s2[i])
				cout << (s2[i] - 'A' + 26) - (s1[i] - 'A') << ' ';
			else
				cout << (s2[i] - 'A') - (s1[i] - 'A') << ' ';
		}
		cout << '\n';
	}

	return 0;
}
