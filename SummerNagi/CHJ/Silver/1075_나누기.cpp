#include <iostream>
#include <climits>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string n;
	int f;
	cin >> n >> f;

	int ans = INT_MAX;

	for (int i = 0; i < 100; i++)
	{
		n.pop_back();
		n.pop_back();

		if (i < 10)
		{
			n.push_back('0');
			n.push_back(i + 48);
		}
		else
		{
			n.push_back(i / 10 + 48);
			n.push_back(i % 10 + 48);
		}

		int num = stoi(n);

		if (num % f == 0)
		{
			cout << n[n.size() - 2] << n[n.size() - 1];
			break;
		}
	}

	return 0;
}