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

	vector<int> a;
	int cnt = 0;
	while (1)
	{
		int n;
		cin >> n;

		if (n == -1)
			break;

		if (n == 0)
		{
			sort(a.begin(), a.end());
			for (int i = 0; i < a.size(); i++)
			{
				for (int j=i+1; j<a.size(); j++)
				{
					if (a[i] * 2 == a[j])
						cnt++;
				}
			}
			cout << cnt << '\n';

			a.clear();
			cnt = 0;
		}
		else
			a.push_back(n);
	}

	return 0;
}