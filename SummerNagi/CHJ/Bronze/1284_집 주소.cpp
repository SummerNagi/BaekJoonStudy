#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		string n;
		cin >> n;

		if (n == "0")
			break;

		int sum = n.size() - 1 + 2;

		for (int i=0; i<n.size(); i++)
		{
			if (n[i] == '1')
				sum += 2;
			else if (n[i] == '0')
				sum += 4;
			else
				sum += 3;
		}

		cout << sum << '\n';
	}

	return 0;
} 
