#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

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

		for (int i=0; i<10; i++)
		{
			int n;
			cin >> n;

			a.push_back(n);
		}

		sort(a.begin(), a.end());

		cout << a[7] << '\n';
	}

	

	return 0;
}