#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int alpha[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		vector<int> a;
		for (int i = 0; i < 5; i++)
		{
			int n;
			cin >> n;

			a.push_back(n);
		}

		sort(a.begin(), a.end());

		if (abs(a[1] - a[3]) > 3)
			cout << "KIN\n";
		else
			cout << a[1] + a[2] + a[3] << '\n';
	}

	return 0;
}
