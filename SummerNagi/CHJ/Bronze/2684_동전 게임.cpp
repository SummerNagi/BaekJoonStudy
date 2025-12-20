#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		int coins[8] = {};

		for (int i = 0; i < s.size() - 2; i++)
		{
			string coin3;
			for (int j = i; j < i + 3; j++)
				coin3 += s[j];

			if (coin3 == "TTT")
				coins[0]++;
			else if (coin3 == "TTH")
				coins[1]++;
			else if (coin3 == "THT")
				coins[2]++;
			else if (coin3 == "THH")
				coins[3]++;
			else if (coin3 == "HTT")
				coins[4]++;
			else if (coin3 == "HTH")
				coins[5]++;
			else if (coin3 == "HHT")
				coins[6]++;
			else if (coin3 == "HHH")
				coins[7]++;
		}

		for (const auto& i : coins)
			cout << i << ' ';
		
		cout << '\n';

	}

	return 0;
}
