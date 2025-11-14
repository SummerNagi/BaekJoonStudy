#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

	int tmp[3];
	long long ans = 0;

	for (int i=0; i<3; i++)
	{
		string s;
		cin >> s;

		for (int j=0; j<10; j++)
		{
			if (s == colors[j])
				tmp[i] = j;
		}
	}

	ans = tmp[0] * 10 + tmp[1];

	for (int i=0; i<tmp[2]; i++)
		ans *= 10;

	cout << ans;

	return 0;
}